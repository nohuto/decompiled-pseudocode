/*
 * XREFs of ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x1800AB73C
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180036420 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall IntersectAndOptimize(float *a1, float *a2, float *a3, _BYTE *a4, _BYTE *a5)
{
  char v5; // r10
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  char IsEmpty; // al
  char v18; // r10
  float v19; // xmm0_4
  float v20; // xmm2_4

  v5 = 0;
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
  }
  else
  {
    v8 = a3[2];
    *a1 = v7;
    v9 = a2[2];
    if ( v8 >= v9 )
    {
      a1[2] = v9;
      v10 = a3[1];
      v11 = a2[1];
      if ( v11 < v10 )
      {
        v19 = a3[3];
        a1[1] = v10;
        v20 = a2[3];
        if ( v19 < v20 )
        {
          a1[3] = v19;
          return 1;
        }
        a1[3] = v20;
        if ( a2[3] <= v10 )
          return v5;
        a2[3] = v10;
      }
      else
      {
        a1[1] = v11;
        v12 = a3[3];
        v13 = a2[3];
        if ( v12 >= v13 )
        {
          v5 = 1;
          a1[3] = v13;
          *a5 = 1;
          return v5;
        }
        a1[3] = v12;
        if ( v12 <= a2[1] )
          return v5;
        a2[1] = v12;
      }
      v5 = 1;
      *a4 = 1;
      return v5;
    }
  }
  a1[2] = v8;
  v15 = a3[1];
  if ( v15 <= a2[1] )
    v15 = a2[1];
  a1[1] = v15;
  v16 = a3[3];
  if ( a2[3] <= v16 )
    v16 = a2[3];
  a1[3] = v16;
  IsEmpty = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a1);
  return IsEmpty == v18;
}
