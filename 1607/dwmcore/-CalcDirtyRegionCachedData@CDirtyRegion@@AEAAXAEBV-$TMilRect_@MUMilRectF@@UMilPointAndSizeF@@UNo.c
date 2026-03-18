/*
 * XREFs of ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x180072474
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800718D0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CDirtyRegion::CalcDirtyRegionCachedData(__int64 a1, float *a2)
{
  bool result; // al
  __int64 v3; // r8
  float *v4; // rdx

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  *(_BYTE *)(v3 + 12) = result;
  *(float *)(v3 + 8) = (float)(v4[3] - v4[1]) * (float)(v4[2] - *v4);
  *(float *)v3 = (float)((float)(v4[2] - *v4) * 0.5) + *v4;
  *(float *)(v3 + 4) = (float)((float)(v4[3] - v4[1]) * 0.5) + v4[1];
  return result;
}
