/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180078A20
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001E8B4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = *((_QWORD *)this + 120);
  if ( v2 )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v2 + 32) + 48LL), 1, 0);
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 120);
    if ( v3 )
      (**v3)(v3, 1LL);
    *((_QWORD *)this + 120) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd(v3, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 10), 0LL);
  }
}
