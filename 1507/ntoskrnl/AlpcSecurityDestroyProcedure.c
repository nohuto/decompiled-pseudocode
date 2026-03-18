/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x1404766CC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcDeleteBlobByHandle @ 0x140476B58 (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 *v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 *v12; // rax
  __int64 **v13; // rcx
  _DWORD *v14; // rcx
  ULONG_PTR v15; // rcx

  v5 = *a1;
  if ( v5 )
    AlpcDeleteBlobByHandle(v5, a1[1], a1);
  v6 = a1[3];
  if ( v6 )
  {
    v7 = (unsigned __int64 *)(v6 + 328);
    v8 = a1 - 6;
    v9 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v9, (ULONG_PTR)v7, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = (__int64 *)*v8;
    if ( (__int64 *)*v8 != v8 )
    {
      v13 = (__int64 **)v8[1];
      if ( (__int64 *)v12[1] != v8 || *v13 != v8 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = (__int64)v13;
      v8[1] = (__int64)v8;
      *v8 = (__int64)v8;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    ObfDereferenceObject((PVOID)a1[3]);
  }
  if ( a1[2] )
  {
    v14 = (_DWORD *)a1[6];
    if ( v14[48] == 1 || v14 )
      ObfDereferenceObject(v14);
    v15 = a1[2];
    if ( v15 )
    {
      if ( (unsigned __int64)(*(_QWORD *)(v15 + 1616) + 160LL) >= 0x1000 )
        PsReturnProcessPagedPoolQuota(v15, 0xA0uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 1616), 0xA0uLL);
    }
    ObfDereferenceObjectWithTag((PVOID)a1[2], 0x63706C41u);
  }
  return 0LL;
}
