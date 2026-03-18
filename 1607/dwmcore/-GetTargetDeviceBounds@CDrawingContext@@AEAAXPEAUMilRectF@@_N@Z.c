/*
 * XREFs of ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@_N@Z @ 0x180064110
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetTargetDeviceBounds(CDrawingContext *this, struct MilRectF *a2, char a3)
{
  CHwDisplayRenderTarget *v4; // rcx
  __int64 v5; // rax
  void (__fastcall *v6)(CHwDisplayRenderTarget *__hidden, struct MilRectF *); // rax

  v4 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 55);
  if ( v4 )
  {
    v5 = *(_QWORD *)v4;
    if ( !a3 )
    {
      ((void (__fastcall *)(CHwDisplayRenderTarget *, struct MilRectF *))v5)(v4, a2);
      return;
    }
    v6 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct MilRectF *))(v5 + 272);
    if ( v6 == CHwDisplayRenderTarget::GetDeviceBounds )
    {
      CHwDisplayRenderTarget::GetDeviceBounds(v4, a2);
      return;
    }
  }
  else
  {
    v4 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 54);
    v6 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct MilRectF *))(*(_QWORD *)v4 + 64LL);
  }
  v6(v4, a2);
}
