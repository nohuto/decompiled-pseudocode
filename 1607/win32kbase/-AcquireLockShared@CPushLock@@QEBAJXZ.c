/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C0003390 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0003480 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C000E1E0 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C000E23C (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001A834 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C001BF3C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C001BFA4 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C001C01C (-GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C001C088 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C0CC (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C001C130 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C001C180 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z @ 0x1C001C234 (-HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C001C350 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C001C840 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0048994 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00F2740 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C00F4FFC (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
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
