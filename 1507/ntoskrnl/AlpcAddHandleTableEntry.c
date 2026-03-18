/*
 * XREFs of AlpcAddHandleTableEntry @ 0x140475C64
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     AlpcpCreateSection @ 0x14052B184 (AlpcpCreateSection.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rcx
  __int64 v13; // r14
  PVOID PoolWithTag; // rax
  void *v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rbp

  v4 = (unsigned __int64 *)(a1 + 8);
  v7 = KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  if ( v10 )
  {
    v12 = *(_QWORD **)a1;
    while ( *v12 )
    {
      ++v11;
      ++v12;
      if ( v11 >= v10 )
        goto LABEL_9;
    }
    *v12 = *a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    return v11 + 16;
  }
  else
  {
LABEL_9:
    v13 = 2 * v10;
    if ( 2 * v10 < 0x1FFFFFFFFFFFFFFFLL )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v10, 0x61486C41u);
      v16 = PoolWithTag;
      v17 = -1LL;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 8 * v13);
        memmove(v16, *(const void **)a1, 8LL * *(_QWORD *)(a1 + 16));
        v18 = *(_QWORD *)(a1 + 16);
        *((_QWORD *)v16 + v18) = *a2;
        if ( *(_QWORD *)(a1 + 16) == 16LL )
          ExFreeToNPagedLookasideList(&stru_140367A80, *(PVOID *)a1);
        else
          ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
        *(_QWORD *)a1 = v16;
        v17 = v18 + 16;
        *(_QWORD *)(a1 + 16) = v13;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease((ULONG_PTR)v4);
      return v17;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease((ULONG_PTR)v4);
      return -1LL;
    }
  }
}
