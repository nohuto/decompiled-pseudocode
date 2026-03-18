/*
 * XREFs of ?HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x180032830
 * Callers:
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18002EF68 (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18009BBA8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::HasRealizationContextChanged(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *((_DWORD *)this + 110)
    || *((_DWORD *)this + 124) == 1 && (unsigned __int8)operator!=((char *)a2 + 144, (char *)this + 448) )
  {
    return 1;
  }
  return v2;
}
