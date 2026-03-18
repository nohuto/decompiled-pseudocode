/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18007E9A8
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rsi
  __int64 v3; // rcx

  v1 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 89);
  if ( v1 )
  {
    (**v1)(*((_QWORD *)this + 89), 1LL);
    *((_QWORD *)this + 89) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd(v3, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 10), 0LL);
  }
}
