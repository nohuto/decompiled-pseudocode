/*
 * XREFs of ?HasRealizationContextChanged@CImageBrush@@UEBAHPEBUBrushContext@@@Z @ 0x1800859F0
 * Callers:
 *     ?GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800837D8 (-GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180087AD8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

__int64 __fastcall CImageBrush::HasRealizationContextChanged(CImageBrush *this, const struct BrushContext *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *((_DWORD *)this + 90) || *((_DWORD *)this + 104) == 1 && (unsigned __int8)operator!=((char *)a2 + 136) )
    return 1;
  return v2;
}
