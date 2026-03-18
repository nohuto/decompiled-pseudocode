/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C00031F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJ_KPEA_N1PEAPEAX@Z @ 0x1C0039B94 (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJ_KPEA_N1PEAPEAX@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039C4C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0039CB4 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0039CF8 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0039DAC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     NtDCompositionBeginFrame @ 0x1C003AE80 (NtDCompositionBeginFrame.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C003BE34 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C003C080 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C003C1F0 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C004600C (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0046068 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0047C44 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C00A884C (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00A88C4 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z @ 0x1C00A8928 (-HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00E0650 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00E0700 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z @ 0x1C00E2460 (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C00E30FC (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
    return (unsigned int)-1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 8, 0LL);
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return (unsigned int)-1073741816;
  }
  return v2;
}
