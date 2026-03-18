/*
 * XREFs of AlpcAddHandleTableEntry @ 0x14047CAB0
 * Callers:
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rcx
  PVOID PoolWithTag; // rax
  void *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rbp
  int v14; // eax

  v2 = (unsigned __int64 *)(a1 + 16);
  v5 = KeAbPreAcquire(a1 + 16, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = *(unsigned int *)(a1 + 8);
  v8 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v9 = *(_QWORD **)a1;
    while ( *v9 )
    {
      ++v8;
      ++v9;
      if ( v8 >= v7 )
        goto LABEL_9;
    }
    *v9 = *a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v8 + 16;
  }
  else
  {
LABEL_9:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v7, 0x61486C41u);
    v11 = PoolWithTag;
    v12 = -1LL;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 16LL * *(unsigned int *)(a1 + 8));
      memmove(v11, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      v13 = *(unsigned int *)(a1 + 8);
      *((_QWORD *)v11 + v13) = *a2;
      if ( *(_DWORD *)(a1 + 8) == 16 )
        ExFreeToNPagedLookasideList(&stru_140317840, *(PVOID *)a1);
      else
        ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
      v14 = 2 * *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = v11;
      *(_DWORD *)(a1 + 8) = v14;
      v12 = v13 + 16;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v12;
  }
}
