/*
 * XREFs of ?GetIndependentFlipState@CompositionSurfaceObject@@QEAAJ_KPEAW4IndependentFlipState@@PEA_N@Z @ 0x1C0048354
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00479C8 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetIndependentFlipState(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        enum IndependentFlipState *a3,
        bool *a4)
{
  char v4; // bl
  int v9; // esi
  int v10; // eax
  struct CCompositionBuffer *v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *(_DWORD *)a3 = 0;
  if ( a4 )
    *a4 = 0;
  v9 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( v9 >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v12) < 0 )
      v10 = 0;
    else
      v10 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v12 + 136LL))(v12);
    *(_DWORD *)a3 = v10;
    if ( a4 )
    {
      if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v12) >= 0 )
        v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v12 + 144LL))(v12);
      *a4 = v4;
    }
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)v9;
}
