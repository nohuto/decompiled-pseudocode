/*
 * XREFs of MiDeletePartitionResources @ 0x1401D91C8
 * Callers:
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiFreePageFileHashPfns @ 0x1400135E8 (MiFreePageFileHashPfns.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140126D68 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     MiIncreaseCommitLimits @ 0x14013A344 (MiIncreaseCommitLimits.c)
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     MiSortPartitionMdls @ 0x1401D9E48 (MiSortPartitionMdls.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     MiFreePartitionPhysicalPages @ 0x1406244E4 (MiFreePartitionPhysicalPages.c)
 *     MiDeletePagingFiles @ 0x140625668 (MiDeletePagingFiles.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  HANDLE *v2; // rbx
  __int64 v3; // rbp
  HANDLE v4; // rsi
  int *v5; // rbp
  int *v6; // rbx
  struct _KTHREAD *CurrentThread; // r15
  int *v8; // r14
  unsigned __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  KIRQL v15; // al
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  void *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  KeSetEvent((PRKEVENT)(a1 + 136), 1, 0);
  v2 = (HANDLE *)(a1 + 160);
  v3 = 5LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      ZwWaitForSingleObject(*v2, 0, 0LL);
      ObCloseHandle(v4, 0);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  MiFreePageFileHashPfns(a1);
  v5 = MiSystemPartition;
  v6 = MiSystemPartition;
  if ( *(_QWORD *)(a1 + 16) )
    v6 = *(int **)(a1 + 16);
  *(_QWORD *)(a1 + 6120) -= MiDeletePagingFiles(a1);
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v8 = MiSystemPartition;
  if ( *(_QWORD *)(a1 + 16) )
    v8 = *(int **)(a1 + 16);
  v9 = (unsigned __int64 *)(v8 + 54);
  v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  MiFreePartitionPhysicalPages(a1);
  if ( v6 == MiSystemPartition )
  {
    MiReturnResidentAvailable(*(_QWORD *)(a1 + 5952));
    _InterlockedExchangeAdd64(&qword_1402FF478, *(_QWORD *)(a1 + 5952));
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 744, *(_QWORD *)(a1 + 5952));
  }
  if ( v6 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1402FF488, *(_QWORD *)(a1 + 5952));
  v12 = *(_QWORD *)(a1 + 6120) - *(_QWORD *)(a1 + 5960);
  if ( v6 == MiSystemPartition )
  {
    MiReturnCommit((__int64)v6, v12);
    _InterlockedExchangeAdd64(&qword_1402FF820, -(__int64)v12);
    v13 = *(_QWORD **)(a1 + 48);
    if ( v13 )
    {
      do
      {
        v14 = (_QWORD *)*v13;
        ExFreePoolWithTag(v13, 0);
        v13 = v14;
      }
      while ( v14 );
    }
  }
  else
  {
    MiIncreaseCommitLimits((__int64)v6, v12, v12, 0, 0LL);
    v15 = ExAcquireSpinLockExclusive(v6 + 56);
    v16 = *(_QWORD **)(a1 + 48);
    if ( v16 )
    {
      while ( *v16 )
        v16 = (_QWORD *)*v16;
      *v16 = *((_QWORD *)v6 + 6);
      *((_QWORD *)v6 + 6) = *(_QWORD *)(a1 + 48);
    }
    ExReleaseSpinLockExclusive(v6 + 56, v15);
    MiSortPartitionMdls(v6);
  }
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(int **)(a1 + 16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5 + 27);
  KeAbPostRelease((ULONG_PTR)(v5 + 54));
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v17 = a1 + 24;
  if ( *(_QWORD *)(a1 + 24) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1402FEBE0, &LockHandle);
    v18 = *(_QWORD *)v17;
    v19 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 || *v19 != v17 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v20 = *(void **)(a1 + 5616);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    *(_QWORD *)(a1 + 5616) = 0LL;
  }
  v21 = *(_QWORD *)(a1 + 128);
  if ( v21 )
    MiDereferencePageRuns(v21);
  v22 = *(_QWORD *)(a1 + 56);
  if ( v22 )
    MiDereferencePageRuns(v22);
}
