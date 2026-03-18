/*
 * XREFs of ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800456C0
 * Callers:
 *     ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z @ 0x180022EA8 (-GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::GetDeviceBounds(CHwDisplayRenderTarget *this, struct MilRectF *a2)
{
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((float *)a2 + 2) = (float)*((int *)this - 42);
  *((float *)a2 + 3) = (float)*((int *)this - 41);
}
