/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C001B1C4
 * Callers:
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C001B7B0 (-OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C001B820 (-MarkInvalid@CCompositionSurface@@MEAAXXZ.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001C1F4 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C294 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C001C6E0 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C001FC78 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C001FEA0 (-MarkInvalid@CCompositionToken@@UEAAXXZ.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C001FEF0 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C0048F10 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00F48EC (-NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C00F4A20 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00F4F6C (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
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
