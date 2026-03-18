/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584
 * Callers:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C00056D8 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C003A3D0 (-OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C003A440 (-MarkInvalid@CCompositionSurface@@MEAAXXZ.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C003BFA0 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C003C080 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C003EF50 (-MarkInvalid@CCompositionToken@@UEAAXXZ.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C003EFA8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C003F1D8 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C0047CF0 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C004A6D0 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00A8988 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00E2590 (-NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C00E28C0 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00E306C (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPushLock::AcquireLockExclusive(CPushLock *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
    return (unsigned int)-1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 8, 0LL);
  *((_QWORD *)this + 2) = KeGetCurrentThread();
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return (unsigned int)-1073741816;
  }
  return v2;
}
