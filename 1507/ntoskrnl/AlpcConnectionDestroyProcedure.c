/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x140533124
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  unsigned __int64 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  void *v16; // rcx
  __int64 v17; // r8
  signed __int64 v19; // rbx
  bool v20; // cc
  ULONG_PTR BugCheckParameter4; // rbx

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v6 = (unsigned __int64 *)(v4[2] - 16LL);
    v7 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL, a4);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = KeAbPreAcquire((ULONG_PTR)(v4 + 44), 0LL, 0LL, v8);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4 + 88, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4 + 44, v10, (ULONG_PTR)(v4 + 44), v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(v13 + 8) != a1 + 24 || *v14 != a1 + 24 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    if ( (_InterlockedExchangeAdd64(v4 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 44);
    KeAbPostRelease((ULONG_PTR)(v4 + 44));
    v15 = v4[2];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v15 - 16));
    KeAbPostRelease(v15 - 16);
    ObfDereferenceObject(*(PVOID *)a1);
  }
  v16 = *(void **)(a1 + 40);
  if ( v16 )
  {
    if ( *(_QWORD *)(a1 + 56) == 16LL )
      ExFreeToNPagedLookasideList(&stru_140367A80, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v16, 0x61486C41u);
  }
  v17 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
  if ( v17 )
  {
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v20 = v19 <= 1;
    BugCheckParameter4 = v19 - 1;
    if ( v20 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v17, 0x21uLL, BugCheckParameter4);
      AlpcpDestroyBlob(v17);
    }
  }
  return 0LL;
}
