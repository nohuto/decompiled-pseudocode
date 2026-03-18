/*
 * XREFs of ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x180084240
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800110F0 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CImmediateBrushRealizer::SetSolidColorBrush(
        CImmediateBrushRealizer *this,
        const struct _D3DCOLORVALUE *a2)
{
  void (__fastcall *v3)(char *); // rbx
  struct CMILBrush *v4; // rdx

  v3 = *(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 48LL);
  *((struct _D3DCOLORVALUE *)this + 5) = *(const struct _D3DCOLORVALUE *)&a2->r;
  v3((char *)this + 40);
  v4 = 0LL;
  if ( this != (CImmediateBrushRealizer *)-16LL )
    v4 = (CImmediateBrushRealizer *)((char *)this + 40);
  CBrushRealizer::SetRealizedBrush(this, v4, 0LL);
}
