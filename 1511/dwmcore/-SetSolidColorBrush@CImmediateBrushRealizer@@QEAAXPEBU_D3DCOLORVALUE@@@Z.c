/*
 * XREFs of ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x1800AC4BC
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18000EB90 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x18008A370 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 */

void __fastcall CImmediateBrushRealizer::SetSolidColorBrush(
        CImmediateBrushRealizer *this,
        const struct _D3DCOLORVALUE *a2)
{
  __int64 v3; // rax
  void (__fastcall *v4)(CMILBrush *); // rsi
  struct CMILBrush *v5; // rdx

  v3 = *((_QWORD *)this + 5);
  *((struct _D3DCOLORVALUE *)this + 5) = *(const struct _D3DCOLORVALUE *)&a2->r;
  v4 = *(void (__fastcall **)(CMILBrush *))(v3 + 48);
  if ( v4 == CMILBrush::SetDefaultRealizationPixelFormat )
    CMILBrush::SetDefaultRealizationPixelFormat((CImmediateBrushRealizer *)((char *)this + 40));
  else
    v4((CImmediateBrushRealizer *)((char *)this + 40));
  v5 = 0LL;
  if ( this != (CImmediateBrushRealizer *)-16LL )
    v5 = (CImmediateBrushRealizer *)((char *)this + 40);
  CLegacyMilBrushRealizer::SetRealizedBrush(this, v5, 0LL);
}
