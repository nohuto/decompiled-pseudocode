/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C00031F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C00056D8 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJ_KPEA_N1PEAPEAX@Z @ 0x1C0039B94 (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJ_KPEA_N1PEAPEAX@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039C4C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0039CB4 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0039CF8 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C003A3D0 (-OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C003A440 (-MarkInvalid@CCompositionSurface@@MEAAXXZ.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     NtDCompositionBeginFrame @ 0x1C003AE80 (NtDCompositionBeginFrame.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C003BE34 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C003BFA0 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C003C080 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C003C1F0 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C003EF50 (-MarkInvalid@CCompositionToken@@UEAAXXZ.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C003EFA8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C003F1D8 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C004600C (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0046068 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0047C44 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C004A6D0 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C00A884C (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00A88C4 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z @ 0x1C00A8928 (-HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00A8988 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00E0650 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z @ 0x1C00E2460 (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z.c)
 *     ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00E2590 (-NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C00E28C0 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00E306C (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C00E30FC (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8);
  }
  else
  {
    ExReleasePushLockSharedEx((char *)this + 8);
  }
  KeLeaveCriticalRegion();
}
