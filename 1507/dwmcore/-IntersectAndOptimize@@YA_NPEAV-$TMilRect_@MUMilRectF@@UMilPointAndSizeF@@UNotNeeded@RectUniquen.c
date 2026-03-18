/*
 * XREFs of ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x180050790
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18004D720 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
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
  float v14; // xmm2_4
  float v15; // xmm1_4
  bool v16; // cc
  float v17; // xmm0_4
  float v18; // xmm2_4

  result = 0;
  v6 = *a3;
  v7 = *a2;
  *a5 = 0;
  *a4 = 0;
  if ( v7 < v6 )
  {
    *a1 = v6;
    v8 = a3[2];
    if ( a2[2] <= v8 )
      v8 = a2[2];
LABEL_9:
    v14 = a3[1];
    a1[2] = v8;
    if ( v14 <= a2[1] )
      v14 = a2[1];
    v15 = a3[3];
    a1[1] = v14;
    if ( a2[3] <= v15 )
      v15 = a2[3];
    v16 = a1[2] <= *a1;
    a1[3] = v15;
    if ( v16 || v15 <= v14 )
      return result;
    return 1;
  }
  v8 = a3[2];
  *a1 = v7;
  v9 = a2[2];
  if ( v8 < v9 )
    goto LABEL_9;
  a1[2] = v9;
  v10 = a3[1];
  v11 = a2[1];
  if ( v11 < v10 )
  {
    v17 = a3[3];
    a1[1] = v10;
    v18 = a2[3];
    if ( v17 >= v18 )
    {
      a1[3] = v18;
      if ( a2[3] <= v10 )
        return result;
      a2[3] = v10;
LABEL_20:
      result = 1;
      *a4 = 1;
      return result;
    }
    a1[3] = v17;
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
    goto LABEL_20;
  }
  return result;
}
