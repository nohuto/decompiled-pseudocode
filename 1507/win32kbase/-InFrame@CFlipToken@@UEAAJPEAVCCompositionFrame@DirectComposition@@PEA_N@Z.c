/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C0047E50
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0047B34 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0048EA0 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AF6B8 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
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
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  bool v17; // [rsp+60h] [rbp+8h] BYREF
  struct CCompositionBuffer *v18; // [rsp+68h] [rbp+10h] BYREF

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
      goto LABEL_27;
    if ( v9 || !*((_DWORD *)this + 30) )
      *a3 = 1;
  }
  if ( !*a3 )
  {
LABEL_27:
    ++*((_DWORD *)this + 7);
    return (unsigned int)v4;
  }
  *((_DWORD *)this + 6) = 3;
  CFlipToken::TraceStateChanged(this);
  v11 = *((_QWORD *)this + 4);
  v17 = 0;
  v4 = CPushLock::AcquireLockExclusive((CPushLock *)(v11 + 32));
  if ( v4 >= 0 )
  {
    v4 = CCompositionSurface::NotifyTokenInFrame((CCompositionSurface *)(v11 + 24), this, &v17);
    CPushLock::ReleaseLock((CPushLock *)(v11 + 32));
  }
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 96) = v17;
    v12 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 104LL))(this, *((unsigned int *)a2 + 10));
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 4);
      if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v13 + 32)) >= 0 )
      {
        *(_DWORD *)(v13 + 108) = v12;
        CPushLock::ReleaseLock((CPushLock *)(v13 + 32));
      }
    }
    if ( !*((_BYTE *)this + 97) )
    {
      v14 = *((_QWORD *)this + 4);
      v15 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 97) = 1;
      if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v14 + 32)) >= 0 )
      {
        if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(v14 + 24), v15, &v18) >= 0 )
          (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v18 + 80LL))(v18);
        CPushLock::ReleaseLock((CPushLock *)(v14 + 32));
      }
    }
  }
  return (unsigned int)v4;
}
