/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C003C080
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C003A480 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C003BC84 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C003BE34 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct DirectComposition::CCompositionFrame *a2, bool *a3)
{
  unsigned int v3; // ebp
  int v4; // edi
  __int64 v8; // r15
  char v9; // si
  unsigned int v10; // eax
  __int64 v11; // rsi
  int v12; // r14d
  __int64 v13; // rsi
  bool v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 10);
  v4 = 0;
  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    v8 = *((_QWORD *)this + 4);
    v9 = 1;
    v4 = CPushLock::AcquireLockShared((CPushLock *)(v8 + 32));
    if ( v4 >= 0 )
    {
      v10 = *(_DWORD *)(v8 + 108);
      v9 = 0;
      if ( !v10 || v3 > v10 || v10 - v3 > 4 )
        v9 = 1;
      CPushLock::ReleaseLock((CPushLock *)(v8 + 32));
    }
    if ( v4 < 0 )
      goto LABEL_23;
    if ( v9 || !*((_DWORD *)this + 30) )
      *a3 = 1;
  }
  if ( !*a3 )
  {
LABEL_23:
    ++*((_DWORD *)this + 7);
    return (unsigned int)v4;
  }
  *((_DWORD *)this + 6) = 3;
  CFlipToken::TraceStateChanged(this);
  v11 = *((_QWORD *)this + 4);
  v15 = 0;
  v4 = CPushLock::AcquireLockExclusive((CPushLock *)(v11 + 32));
  if ( v4 >= 0 )
  {
    v4 = CCompositionSurface::NotifyTokenInFrame((CCompositionSurface *)(v11 + 24), this, &v15);
    CPushLock::ReleaseLock((CPushLock *)(v11 + 32));
  }
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 96) = v15;
    v12 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 136LL))(this, *((unsigned int *)a2 + 10));
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 4);
      if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v13 + 32)) >= 0 )
      {
        *(_DWORD *)(v13 + 108) = v12;
        CPushLock::ReleaseLock((CPushLock *)(v13 + 32));
      }
    }
    CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 0);
  }
  return (unsigned int)v4;
}
