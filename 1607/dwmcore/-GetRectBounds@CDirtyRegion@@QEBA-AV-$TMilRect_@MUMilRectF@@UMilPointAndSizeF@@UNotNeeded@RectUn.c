/*
 * XREFs of ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180110060
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

float *__fastcall CDirtyRegion::GetRectBounds(__int64 a1, float *a2)
{
  unsigned int v2; // r9d
  float *v3; // r10
  __int64 v4; // r11
  int v5; // r9d
  float *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9

  v2 = 0;
  v3 = a2;
  *((_QWORD *)a2 + 1) = 0LL;
  v4 = a1;
  *(_QWORD *)a2 = 0LL;
  if ( *(_BYTE *)(a1 + 2726) )
  {
    if ( *(_DWORD *)(a1 + 576) )
    {
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3, (float *)(v4 + 16 * (v2 + 26LL)));
        v2 = v5 + 1;
      }
      while ( v2 < *(_DWORD *)(v4 + 576) );
    }
  }
  else
  {
    v6 = (float *)(a1 + 24);
    do
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3, v6);
      v6 = (float *)(v7 + 16);
    }
    while ( v8 != 1 );
  }
  return v3;
}
