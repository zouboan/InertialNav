t2 = q0*q1*2.0;
t3 = q2*q3*2.0;
t4 = t2+t3;
t5 = pd-ptd;
t6 = 1.0/t5;
t7 = q0*q0;
t8 = q1*q1;
t9 = q2*q2;
t10 = q3*q3;
t11 = t7-t8-t9+t10;
t12 = q0*q2*2.0;
t13 = q1*q3*2.0;
t14 = t7-t8+t9-t10;
t15 = t14*ve;
t16 = t4*vd;
t17 = q0*q3*2.0;
t21 = q1*q2*2.0;
t18 = t17-t21;
t22 = t18*vn;
t19 = t15+t16-t22;
t20 = t12-t13;
A0[0][0] = -t6*t11*(vn*(t12+t13)+t11*vd-ve*(t2-t3))+t4*t6*t19;
A0[0][1] = t6*t19*t20;
A0[0][2] = t6*t11*(ve*(t17+t21)-t20*vd+vn*(t7+t8-t9-t10));
A0[0][3] = t6*t11*t18;
A0[0][4] = -t6*t11*t14;
A0[0][5] = -t4*t6*t11;
A0[0][8] = 1.0/(t5*t5)*t11*t19;
