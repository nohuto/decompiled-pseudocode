/*
 * XREFs of ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x18009C544
 * Callers:
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x18009BE2C (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 * Callees:
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x18009C314 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 *     acosf_0 @ 0x18009EAC2 (acosf_0.c)
 *     sqrtf_0 @ 0x18009EAE6 (sqrtf_0.c)
 */

void __fastcall ST::SO3_log_with_exp_coefs<float>(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v9; // xmm9_4
  float v10; // xmm0_4
  float v11; // xmm10_4
  float v12; // xmm13_4
  float v13; // xmm12_4
  float v14; // xmm2_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm0_4
  int v28; // eax
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  int v33; // eax
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  int v37; // eax
  float v38; // xmm0_4

  v9 = a2[7] - a2[5];
  v10 = (float)((float)(*a2 + a2[4]) + a2[8]) - 1.0;
  *a1 = v9;
  v11 = a2[2] - a2[6];
  a1[1] = v11;
  v12 = a2[3] - a2[1];
  v13 = fmaxf(-1.0, fminf(v10 * 0.5, 1.0));
  a1[2] = v12;
  v14 = (float)((float)(v9 * v9) + (float)(v11 * v11)) + (float)(v12 * v12);
  if ( v14 >= 0.03906 )
  {
    v17 = acosf_0(v13);
  }
  else
  {
    v15 = (float)((float)((float)(v14 * 0.0023437501) + 0.020833334) * v14) + 0.5;
    v16 = sqrtf_0(v14) * v15;
    if ( v13 >= 0.0 )
    {
      ST::SO3_compute_exp_coefs<float>(v16 * v16, a3, a4, a5);
      *a1 = v9 * v15;
      a1[1] = v11 * v15;
      a1[2] = v15 * v12;
      return;
    }
    v17 = 3.1415927 - v16;
  }
  ST::SO3_compute_exp_coefs<float>(v17 * v17, a3, a4, a5);
  if ( v13 > -0.99800003 )
  {
    v18 = 0.5 / *a3;
    *a1 = v9 * v18;
    a1[1] = v11 * v18;
    a1[2] = v18 * v12;
    return;
  }
  v19 = 1.0 / *a4;
  v20 = (float)(*a2 - v13) * v19;
  v21 = (float)(a2[4] - v13) * v19;
  v22 = (float)(a2[8] - v13) * v19;
  v23 = v19 * 0.5;
  v24 = (float)(a2[1] + a2[3]) * v23;
  v25 = (float)(a2[6] + a2[2]) * v23;
  v26 = (float)(a2[5] + a2[7]) * v23;
  if ( v20 <= v21 )
  {
    if ( v21 > v22 )
    {
      v32 = sqrtf_0(v21);
      v33 = 1;
      if ( v11 < 0.0 )
        v33 = -1;
      v34 = v32 * (float)v33;
      a1[1] = v34;
      v35 = 1.0 / v34;
      v31 = v35 * v26;
      *a1 = v35 * v24;
      goto LABEL_17;
    }
  }
  else if ( v20 > v22 )
  {
    v27 = sqrtf_0(v20);
    v28 = 1;
    if ( *a1 < 0.0 )
      v28 = -1;
    v29 = v27 * (float)v28;
    *a1 = v29;
    v30 = 1.0 / v29;
    v31 = v30 * v25;
    a1[1] = v30 * v24;
LABEL_17:
    a1[2] = v31;
    return;
  }
  v36 = sqrtf_0(v22);
  v37 = 1;
  if ( v12 < 0.0 )
    v37 = -1;
  v38 = v36 * (float)v37;
  a1[2] = v38;
  a1[1] = (float)(1.0 / v38) * v26;
  *a1 = (float)(1.0 / v38) * v25;
}
