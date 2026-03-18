/*
 * XREFs of ?SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0048480
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0047964 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00479C8 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0047D00 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?SignalGpuFence@CCompositionFrame@DirectComposition@@QEAAJU_LUID@@_K1@Z @ 0x1C006B314 (-SignalGpuFence@CCompositionFrame@DirectComposition@@QEAAJU_LUID@@_K1@Z.c)
 *     ?SignalGpuFence@CFlipToken@@IEAAXXZ @ 0x1C00A40D8 (-SignalGpuFence@CFlipToken@@IEAAXXZ.c)
 *     ??1CScatterToken@@MEAA@XZ @ 0x1C00E115C (--1CScatterToken@@MEAA@XZ.c)
 *     ?Discard@CScatterToken@@UEAAXXZ @ 0x1C00E1350 (-Discard@CScatterToken@@UEAAXXZ.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

void __fastcall CompositionSurfaceObject::SignalGpuFence(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        __int64 a3)
{
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v6) >= 0 )
      (*(void (__fastcall **)(struct CCompositionBuffer *, __int64))(*(_QWORD *)v6 + 72LL))(v6, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
