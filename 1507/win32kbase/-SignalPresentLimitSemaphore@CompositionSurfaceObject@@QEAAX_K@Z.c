/*
 * XREFs of ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00484F4
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0047964 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0047D00 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?SignalPresentLimitSemaphore@CFlipToken@@IEAAXXZ @ 0x1C00A40B8 (-SignalPresentLimitSemaphore@CFlipToken@@IEAAXXZ.c)
 *     ?CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00E127C (-CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENT.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

void __fastcall CompositionSurfaceObject::SignalPresentLimitSemaphore(
        CompositionSurfaceObject *this,
        unsigned __int64 a2)
{
  struct CCompositionBuffer *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v4) >= 0 )
      (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v4 + 80LL))(v4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
