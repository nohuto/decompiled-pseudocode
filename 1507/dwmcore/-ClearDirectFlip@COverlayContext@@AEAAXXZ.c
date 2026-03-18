/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180006AE0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rsi
  __int64 v3; // rcx

  v1 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 78);
  if ( v1 )
  {
    (**v1)(*((_QWORD *)this + 78), 1LL);
    *((_QWORD *)this + 78) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd(v3, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 10), 0LL);
  }
}
