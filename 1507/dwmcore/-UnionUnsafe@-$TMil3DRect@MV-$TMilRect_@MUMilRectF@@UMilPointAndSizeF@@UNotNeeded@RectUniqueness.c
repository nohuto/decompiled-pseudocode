/*
 * XREFs of ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800566D0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        float *a1,
        float *a2)
{
  unsigned int v2; // r8d
  float v3; // xmm3_4
  BOOL v4; // r9d
  unsigned int v5; // r8d
  BOOL v6; // r8d
  char result; // al
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4

  v2 = a1[5] <= a1[4];
  if ( a1[2] <= *a1 )
    ++v2;
  if ( a1[3] <= a1[1] )
    ++v2;
  v3 = *a2;
  v4 = v2 > 1;
  v5 = a2[5] <= a2[4];
  if ( a2[2] <= *a2 )
    ++v5;
  if ( a2[3] <= a2[1] )
    ++v5;
  v6 = v5 > 1;
  if ( !v4 )
  {
    if ( !v6 )
    {
      if ( *a1 > v3 )
        *a1 = v3;
      v8 = a2[1];
      if ( a1[1] > v8 )
        a1[1] = v8;
      v9 = a2[2];
      if ( v9 > a1[2] )
        a1[2] = v9;
      v10 = a2[3];
      if ( v10 > a1[3] )
        a1[3] = v10;
      v11 = a2[5];
      if ( v11 > a1[5] )
        a1[5] = v11;
      v12 = a2[4];
      if ( a1[4] > v12 )
        a1[4] = v12;
    }
    return 1;
  }
  if ( !v6 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    return 1;
  }
  result = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
