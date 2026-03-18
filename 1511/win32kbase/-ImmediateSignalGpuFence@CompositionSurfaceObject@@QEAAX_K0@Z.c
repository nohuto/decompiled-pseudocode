/*
 * XREFs of ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0039CB4
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00394AC (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C003BE34 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C003A2EC (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CompositionSurfaceObject::ImmediateSignalGpuFence(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        __int64 a3)
{
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v6) >= 0 )
      (*(void (__fastcall **)(struct CCompositionBuffer *, __int64))(*(_QWORD *)v6 + 80LL))(v6, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
