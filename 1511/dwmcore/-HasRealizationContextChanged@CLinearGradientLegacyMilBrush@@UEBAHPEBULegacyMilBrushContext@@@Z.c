/*
 * XREFs of ?HasRealizationContextChanged@CLinearGradientLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x180113670
 * Callers:
 *     <none>
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002D374 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::HasRealizationContextChanged(
        CLinearGradientLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2)
{
  unsigned int v2; // r8d

  if ( *((_DWORD *)this + 27) != 1 || !operator!=((float *)a2 + 34, (float *)this + 14) )
    return 0;
  return v2;
}
