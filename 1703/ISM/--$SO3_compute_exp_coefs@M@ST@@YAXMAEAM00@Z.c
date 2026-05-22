/*
 * XREFs of ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x18009C314
 * Callers:
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x18009BCDC (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x18009C544 (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 * Callees:
 *     cosf_0 @ 0x18009EADA (cosf_0.c)
 *     sinf_0 @ 0x18009EAE0 (sinf_0.c)
 *     sqrtf_0 @ 0x18009EAE6 (sqrtf_0.c)
 */

void __fastcall ST::SO3_compute_exp_coefs<float>(float a1, float *a2, float *a3, float *a4)
{
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm8_4
  float v10; // xmm7_4
  float v11; // xmm0_4

  if ( a1 >= 0.097649999 )
  {
    if ( a1 >= 0.25 )
    {
      v9 = sqrtf_0(a1);
      v10 = sinf_0(v9) * (float)(1.0 / v9);
      *a2 = v10;
      v11 = cosf_0(v9);
      *a4 = (float)(1.0 - v10) * (float)((float)(1.0 / v9) * (float)(1.0 / v9));
      *a3 = (float)(1.0 - v11) * (float)((float)(1.0 / v9) * (float)(1.0 / v9));
    }
    else
    {
      *a3 = (float)(0.5
                  - (float)((float)(0.03156168 - (float)((float)(0.00064079621 - (float)(a1 * 0.0000041396524)) * a1))
                          * a1))
          / (float)((float)((float)((float)((float)((float)(a1 * 0.00000084998118) + 0.00018797912) * a1) + 0.020209974)
                          * a1)
                  + 1.0);
      v8 = (float)(0.16666667
                 - (float)((float)(0.0054694735 - (float)((float)(0.000077325036 - (float)(a1 * 0.00000037132554)) * a1))
                         * a1))
         / (float)((float)((float)((float)((float)((float)(a1 * 0.00000048189622) + 0.00013263202) * a1) + 0.01718316)
                         * a1)
                 + 1.0);
      *a4 = v8;
      *a2 = 1.0 - (float)(v8 * a1);
    }
  }
  else
  {
    v7 = 0.16666667 - (float)((float)(0.0083333338 - (float)(a1 * 0.0001984127)) * a1);
    *a4 = v7;
    *a2 = 1.0 - (float)(v7 * a1);
    *a3 = 0.5 - (float)((float)(0.041666668 - (float)(a1 * 0.0013888889)) * a1);
  }
}
