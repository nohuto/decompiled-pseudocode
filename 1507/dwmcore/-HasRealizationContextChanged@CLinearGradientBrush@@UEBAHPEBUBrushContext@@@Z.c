/*
 * XREFs of ?HasRealizationContextChanged@CLinearGradientBrush@@UEBAHPEBUBrushContext@@@Z @ 0x1800F9820
 * Callers:
 *     <none>
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180087AD8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

__int64 __fastcall CLinearGradientBrush::HasRealizationContextChanged(
        CLinearGradientBrush *this,
        const struct BrushContext *a2)
{
  unsigned int v2; // r8d

  if ( *((_DWORD *)this + 27) != 1 || !operator!=((float *)a2 + 34, (float *)this + 14) )
    return 0;
  return v2;
}
