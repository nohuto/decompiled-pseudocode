/*
 * XREFs of ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001E8B4
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180078A20 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ??1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ @ 0x1800994D4 (--1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180099584 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(_QWORD *a1, int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdi

  v4 = a2;
  if ( a1[32] )
  {
    v6 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 24LL) + 8LL))(*(_QWORD *)(*a1 + 24LL)) + 472);
    if ( a3 )
      a1[2 * v4 + 24] = v6;
    else
      a1[2 * v4 + 25] += (v6 - a1[2 * v4 + 24])
                       / (unsigned __int64)(*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 24LL)
                                                                                          + 8LL))(*(_QWORD *)(*a1 + 24LL))
                                                      + 312)
                                          / 1000LL);
  }
}
