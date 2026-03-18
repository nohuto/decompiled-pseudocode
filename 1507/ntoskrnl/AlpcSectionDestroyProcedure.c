/*
 * XREFs of AlpcSectionDestroyProcedure @ 0x1405477A8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcDeleteBlobByHandle @ 0x140476B58 (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSectionDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rcx

  v5 = *(_QWORD **)(a1 + 16);
  if ( v5 )
  {
    AlpcDeleteBlobByHandle(v5, *(_QWORD *)(a1 + 24), a1, a4);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    v8 = (unsigned __int64 *)(v6 + 328);
    v9 = (_QWORD *)(a1 - 48);
    v10 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v10, (ULONG_PTR)v8, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 != v9 )
    {
      v14 = (_QWORD *)v9[1];
      if ( (_QWORD *)v13[1] != v9 || (_QWORD *)*v14 != v9 )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      v9[1] = v9;
      *v9 = v9;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    ObfDereferenceObject(*(PVOID *)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    ObfDereferenceObject(*(PVOID *)a1);
  return 0LL;
}
