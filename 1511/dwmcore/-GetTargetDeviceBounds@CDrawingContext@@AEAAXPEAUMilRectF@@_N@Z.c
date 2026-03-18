/*
 * XREFs of ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@_N@Z @ 0x1800371FC
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800814E0 (-GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 */

void __fastcall CDrawingContext::GetTargetDeviceBounds(CDrawingContext *this, struct MilRectF *a2, char a3)
{
  CHwDisplayRenderTarget *v3; // rdi
  struct MilRectF *v4; // rsi
  __int64 v5; // rax
  void (__fastcall *v6)(CHwDisplayRenderTarget *__hidden, struct MilRectF *); // rbx

  v3 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 45);
  v4 = a2;
  if ( !v3 )
  {
    v3 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 44);
    v6 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct MilRectF *))(*(_QWORD *)v3 + 64LL);
LABEL_6:
    v6(v3, a2);
    return;
  }
  v5 = *(_QWORD *)v3;
  if ( a3 )
  {
    v6 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct MilRectF *))(v5 + 256);
    if ( v6 == CHwDisplayRenderTarget::GetDeviceBounds )
    {
      CHwDisplayRenderTarget::GetDeviceBounds(v3, a2);
      return;
    }
    goto LABEL_6;
  }
  LOBYTE(a2) = *((_BYTE *)this + 5640);
  (*(void (__fastcall **)(_QWORD, struct MilRectF *, struct MilRectF *))(v5 + 264))(*((_QWORD *)this + 45), a2, v4);
}
