/*
 * XREFs of ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJ_KPEA_N1PEAPEAX@Z @ 0x1C0039B94
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0039510 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C003A2EC (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetOutOfFrameDirectFlipNotification(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        bool *a3,
        bool *a4)
{
  char v5; // bl
  int v9; // edi
  char v10; // al
  struct CCompositionBuffer *v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  v9 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( v9 >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v12) < 0 )
      v10 = 0;
    else
      v10 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v12 + 104LL))(v12);
    *a4 = v10;
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v12) >= 0 )
      v5 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v12 + 112LL))(v12);
    *a3 = v5;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)v9;
}
