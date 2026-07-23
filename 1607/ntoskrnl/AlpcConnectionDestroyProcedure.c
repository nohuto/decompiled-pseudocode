/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x1404B0404
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(__int64 a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 *v3; // rsi
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  _BYTE *v6; // rax
  _BYTE *v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  void *v11; // rcx
  ULONG_PTR v12; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = (unsigned __int64 *)(v1[2] - 16LL);
    v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
    if ( v5 )
      v5[26] |= 1u;
    v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v1 + 44), 0LL, 0);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1 + 88, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1 + 44, v6, (ULONG_PTR)(v1 + 44));
    if ( v7 )
      v7[26] |= 1u;
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(v8 + 8) != a1 + 24 || *v9 != a1 + 24 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( (_InterlockedExchangeAdd64(v1 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 44);
    KeAbPostRelease((ULONG_PTR)(v1 + 44));
    v10 = v1[2];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16));
    KeAbPostRelease(v10 - 16);
    ObfDereferenceObject(*(PVOID *)a1);
  }
  v11 = *(void **)(a1 + 40);
  if ( v11 )
  {
    if ( *(_QWORD *)(a1 + 56) == 16LL )
      ExFreeToNPagedLookasideList(&stru_14033B580, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v11, 0x61486C41u);
  }
  v12 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
  if ( v12 )
    AlpcpDereferenceBlobEx(v12, 1);
  return 0LL;
}
