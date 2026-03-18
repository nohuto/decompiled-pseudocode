/*
 * XREFs of ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x180047B14
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18004B090 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     <none>
 */

char __fastcall IntersectAndOptimize(float *a1, float *a2, float *a3, _BYTE *a4, _BYTE *a5)
{
  char result; // al
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  bool v14; // cc
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm2_4

  result = 0;
  v6 = *a3;
  v7 = *a2;
  *a5 = 0;
  *a4 = 0;
  if ( v7 < v6 )
  {
    *a1 = v6;
    v8 = fminf(a3[2], a2[2]);
    goto LABEL_8;
  }
  v8 = a3[2];
  *a1 = v7;
  v9 = a2[2];
  if ( v8 < v9 )
  {
LABEL_8:
    v14 = v8 <= *a1;
    v15 = a3[1];
    v16 = a3[3];
    a1[2] = v8;
    v17 = fmaxf(v15, a2[1]);
    a1[1] = v17;
    v18 = fminf(v16, a2[3]);
    a1[3] = v18;
    if ( v14 || v18 <= v17 )
      return result;
    return 1;
  }
  a1[2] = v9;
  v10 = a3[1];
  v11 = a2[1];
  if ( v11 < v10 )
  {
    v19 = a3[3];
    a1[1] = v10;
    v20 = a2[3];
    if ( v19 >= v20 )
    {
      a1[3] = v20;
      if ( a2[3] <= v10 )
        return result;
      a2[3] = v10;
LABEL_15:
      result = 1;
      *a4 = 1;
      return result;
    }
    a1[3] = v19;
    return 1;
  }
  a1[1] = v11;
  v12 = a3[3];
  v13 = a2[3];
  if ( v12 >= v13 )
  {
    result = 1;
    a1[3] = v13;
    *a5 = 1;
    return result;
  }
  a1[3] = v12;
  if ( v12 > a2[1] )
  {
    a2[1] = v12;
    goto LABEL_15;
  }
  return result;
}
