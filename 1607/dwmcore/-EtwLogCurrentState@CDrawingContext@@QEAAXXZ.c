/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x180005608
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     Template_ppffffcb @ 0x1801252D8 (Template_ppffffcb.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this, __int64 a2)
{
  unsigned int CurrentVisual; // eax
  int v4; // ecx
  _BYTE v5[64]; // [rsp+50h] [rbp-78h] BYREF
  int v6; // [rsp+90h] [rbp-38h]
  int v7; // [rsp+A0h] [rbp-28h] BYREF
  int v8; // [rsp+A4h] [rbp-24h]
  int v9; // [rsp+A8h] [rbp-20h]
  int v10; // [rsp+ACh] [rbp-1Ch]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
  {
    v6 = 0;
    LOBYTE(a2) = 1;
    CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, a2, &v7);
    CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 536), (struct CMILMatrix *)v5);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 128));
      Template_ppffffcb(
        v4,
        (unsigned int)&EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
        (_DWORD)this,
        CurrentVisual,
        v7,
        v8,
        v9,
        v10,
        68,
        (__int64)v5);
    }
  }
}
