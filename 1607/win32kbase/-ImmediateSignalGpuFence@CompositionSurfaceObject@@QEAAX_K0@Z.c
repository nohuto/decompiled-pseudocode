/*
 * XREFs of ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C001C088
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C001C5B4 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C001EFF4 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C001B724 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CompositionSurfaceObject::ImmediateSignalGpuFence(
        CompositionSurfaceObject *this,
        __int64 a2,
        __int64 a3)
{
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v6) >= 0 )
      (*(void (__fastcall **)(struct CCompositionBuffer *, __int64))(*(_QWORD *)v6 + 88LL))(v6, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
