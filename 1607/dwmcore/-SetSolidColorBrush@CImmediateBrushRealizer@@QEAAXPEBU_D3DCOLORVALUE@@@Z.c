/*
 * XREFs of ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x180020C90
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x180005140 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmediateBrushRealizer::SetSolidColorBrush(
        struct _D3DCOLORVALUE *this,
        const struct _D3DCOLORVALUE *a2)
{
  struct CMILBrush *p_b; // rdx

  *(struct _D3DCOLORVALUE *)&this[5].r = *(const struct _D3DCOLORVALUE *)&a2->r;
  (*(void (__fastcall **)(D3DVALUE *))(*(_QWORD *)&this[2].b + 48LL))(&this[2].b);
  p_b = 0LL;
  if ( this != (struct _D3DCOLORVALUE *)-16LL )
    p_b = (struct CMILBrush *)&this[2].b;
  CLegacyMilBrushRealizer::SetRealizedBrush((CLegacyMilBrushRealizer *)this, p_b, 0LL);
}
