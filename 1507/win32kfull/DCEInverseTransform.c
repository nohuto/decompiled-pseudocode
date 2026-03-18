/*
 * XREFs of DCEInverseTransform @ 0x1C01E48EC
 * Callers:
 *     DCEHitTestWindow @ 0x1C01E47FC (DCEHitTestWindow.c)
 * Callees:
 *     FixedPointSubPixel @ 0x1C01D10B0 (FixedPointSubPixel.c)
 */

__int64 __fastcall DCEInverseTransform(int *a1, float *a2, int *a3, int *a4)
{
  float v4; // xmm1_4
  int *v5; // r10
  float v6; // xmm3_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm3_4
  float v28; // xmm6_4

  v4 = *a2;
  v5 = a1;
  v6 = a2[8] - *a2;
  v7 = a2[16] - *a2;
  v8 = a2[1];
  v9 = a2[9] - v8;
  v10 = a2[17] - v8;
  if ( a3 )
    v11 = FixedPointSubPixel(*a3);
  else
    v11 = 0.0;
  v12 = (float)((float)*a4 + v11) - v4;
  if ( a3 )
    v13 = FixedPointSubPixel(a3[1]);
  else
    v13 = 0.0;
  v14 = 0;
  v15 = (float)((float)a4[1] + v13) - v8;
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v16 <= 0.00000011920929 )
  {
    v17 = v6;
    v18 = v9;
    v6 = v7;
    v9 = v10;
    v7 = v17;
    v10 = v18;
    v14 = 1;
  }
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v19 <= 0.00000011920929 )
    return 0LL;
  v21 = (float)(v10 * v6) - (float)(v7 * v9);
  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v21) & _xmm);
  if ( v22 <= 0.00000011920929 )
    return 0LL;
  v23 = (float)((float)(v15 * v6) - (float)(v12 * v9)) / v21;
  v24 = (float)(v12 - (float)(v23 * v7)) / v6;
  if ( v14 )
  {
    v25 = v24;
    v24 = v23;
    v23 = v25;
  }
  v26 = (float)((float)((float)((float)((float)(a2[14] - a2[6]) * v24) + a2[6]) + (float)((float)(a2[22] - a2[6]) * v23))
              * (float)(v5[2] - *v5))
      + (float)*v5;
  v27 = (float)((float)((float)((float)((float)(a2[15] - a2[7]) * v24) + a2[7]) + (float)((float)(a2[23] - a2[7]) * v23))
              * (float)(v5[3] - v5[1]))
      + (float)v5[1];
  if ( v26 < 0.0 )
    v28 = v26 - 0.5;
  else
    v28 = v26 + 0.5;
  *a4 = (int)v28;
  if ( v27 < 0.0 )
    a4[1] = (int)(float)(v27 - 0.5);
  else
    a4[1] = (int)(float)(v27 + 0.5);
  return 1LL;
}
