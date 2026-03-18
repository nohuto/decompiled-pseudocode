/*
 * XREFs of CmpFreeKeyControlBlock @ 0x1403FCC40
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpDecommisssionKcb @ 0x1404C3454 (CmpDecommisssionKcb.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(unsigned __int64 P)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 *v7; // rax
  __int64 **v8; // rcx
  _DWORD *v9; // rbx
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax
  unsigned __int16 i; // dx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rcx

  _InterlockedDecrement64(&CmPerfCounters);
  v2 = *(void **)(P + 192);
  if ( (unsigned __int64)v2 >= 2 )
    ExFreePoolWithTag(v2, 0x624E4D43u);
  v3 = *(void **)(P + 288);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x624E4D43u);
  if ( (*(_BYTE *)(P + 6) & 1) != 0 )
  {
    _InterlockedDecrement64(&qword_1406FC040);
    _InterlockedIncrement64(&qword_1406FC038);
    v4 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0LL);
    v5 = v4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, v4);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    *(&CmpAllocBucketLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpAllocBucketLock + 12) = CurrentIrql;
    v7 = (__int64 *)(P + 120);
    *(_QWORD *)(P + 32) = 0LL;
    v8 = (__int64 **)qword_1402FD6A8;
    *(_QWORD *)(P + 120) = &CmpFreeKCBListHead;
    *(_QWORD *)(P + 128) = v8;
    if ( *v8 != &CmpFreeKCBListHead )
      __fastfail(3u);
    *v8 = v7;
    v9 = (_DWORD *)(P & 0xFFFFFFFFFFFFF000uLL);
    qword_1402FD6A8 = (__int64)v7;
    if ( ++*v9 == 13 )
    {
      for ( i = 0; i < 0xDu; ++i )
      {
        v13 = &v9[74 * i + 32];
        v14 = *v13;
        v15 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        _InterlockedDecrement64(&qword_1406FC038);
      }
      ExFreePoolWithTag(v9, 0x6C414D43u);
      _InterlockedDecrement64(&qword_1406FC030);
    }
    v10 = *((_BYTE *)&CmpAllocBucketLock + 48);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v11);
    __writecr8(v10);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
  }
  else
  {
    ExFreePoolWithTag((PVOID)P, 0x626B4D43u);
  }
}
