/*
 * XREFs of AlpcAddHandleTableEntry @ 0x14040AD10
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x140471738 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     AlpcpReleasePushLockExclusive @ 0x14065484C (AlpcpReleasePushLockExclusive.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rsi
  _BYTE *v5; // rax
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdi
  PVOID PoolWithTag; // rax
  void *v14; // r14
  __int64 v15; // rdi

  v2 = (unsigned __int64 *)(a1 + 8);
  v5 = (_BYTE *)KeAbPreAcquire(a1 + 8, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    v6[26] |= 1u;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  if ( v7 )
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
    AlpcpReleasePushLockExclusive((ULONG_PTR)v2);
    return v8 + 16;
  }
  else
  {
LABEL_9:
    v10 = 2 * v7;
    if ( 2 * v7 < 0x1FFFFFFFFFFFFFFFLL )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v7, 0x61486C41u);
      v11 = -1LL;
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 8 * v10);
        memmove(v14, *(const void **)a1, 8LL * *(_QWORD *)(a1 + 16));
        v15 = *(_QWORD *)(a1 + 16);
        *((_QWORD *)v14 + v15) = *a2;
        if ( *(_QWORD *)(a1 + 16) == 16LL )
          ExFreeToNPagedLookasideList(&stru_14033B580, *(PVOID *)a1);
        else
          ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
        *(_QWORD *)a1 = v14;
        v11 = v15 + 16;
        *(_QWORD *)(a1 + 16) = v10;
      }
    }
    else
    {
      v11 = -1LL;
    }
    AlpcpReleasePushLockExclusive((ULONG_PTR)v2);
    return v11;
  }
}
