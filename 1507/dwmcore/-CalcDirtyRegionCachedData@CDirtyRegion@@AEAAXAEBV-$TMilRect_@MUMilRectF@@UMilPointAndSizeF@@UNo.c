/*
 * XREFs of ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x18003D970
 * Callers:
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18003CC34 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CD40 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CDirtyRegion::CalcDirtyRegionCachedData(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  float *v4; // rdx

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  *(_BYTE *)(v3 + 12) = result;
  *(float *)(v3 + 8) = (float)(v4[2] - *v4) * (float)(v4[3] - v4[1]);
  *(float *)v3 = (float)((float)(v4[2] - *v4) * 0.5) + *v4;
  *(float *)(v3 + 4) = (float)((float)(v4[3] - v4[1]) * 0.5) + v4[1];
  return result;
}
