/*
 * XREFs of ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z @ 0x180022EA8
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800456C0 (-GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDrawingContext::GetTargetDeviceBounds(CDrawingContext *this, struct MilRectF *a2)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(CHwDisplayRenderTarget *__hidden, struct MilRectF *); // rdi

  v2 = *((_QWORD *)this + 45);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct MilRectF *))(*(_QWORD *)v2 + 256LL);
    if ( v3 == CHwDisplayRenderTarget::GetDeviceBounds )
      CHwDisplayRenderTarget::GetDeviceBounds(*((CHwDisplayRenderTarget **)this + 45), a2);
    else
      v3(*((CHwDisplayRenderTarget **)this + 45), a2);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, struct MilRectF *))(**((_QWORD **)this + 44) + 64LL))(*((_QWORD *)this + 44), a2);
  }
}
