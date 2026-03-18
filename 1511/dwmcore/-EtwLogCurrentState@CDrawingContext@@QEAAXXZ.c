/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18000F0A0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180043690 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_ppffffcb @ 0x18010EC90 (Template_ppffffcb.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this)
{
  unsigned int CurrentVisual; // eax
  int v3; // ecx
  int v4; // [rsp+50h] [rbp-68h] BYREF
  int v5; // [rsp+54h] [rbp-64h]
  int v6; // [rsp+58h] [rbp-60h]
  int v7; // [rsp+5Ch] [rbp-5Ch]
  _BYTE v8[64]; // [rsp+60h] [rbp-58h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
  {
    CScopedClipStack::GetTopClipBoundsInScope((char *)this + 680, &v4);
    CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 456), (struct CBaseMatrix *)v8);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 56));
      Template_ppffffcb(
        v3,
        (unsigned int)&EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
        (_DWORD)this,
        CurrentVisual,
        v4,
        v5,
        v6,
        v7,
        64,
        (__int64)v8);
    }
  }
}
