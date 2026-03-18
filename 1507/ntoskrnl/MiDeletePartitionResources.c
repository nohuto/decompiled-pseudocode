/*
 * XREFs of MiDeletePartitionResources @ 0x14021D020
 * Callers:
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x1400129B4 (MiFreePageFileHashPfns.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14015A080 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     MiIncreaseCommitLimits @ 0x14016BCC8 (MiIncreaseCommitLimits.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ZwWaitForSingleObject @ 0x14017F070 (ZwWaitForSingleObject.c)
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     MiFreePartitionPhysicalPages @ 0x1406A3D40 (MiFreePartitionPhysicalPages.c)
 *     MiDeletePagingFiles @ 0x1406A5098 (MiDeletePagingFiles.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  HANDLE *v2; // rbx
  __int64 v3; // rbp
  HANDLE v4; // rsi
  __int16 *v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int32 *v12; // rsi
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v14; // rcx
  unsigned int v15; // ebp
  signed __int32 v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  void *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  KeSetEvent((PRKEVENT)(a1 + 152), 1, 0);
  v2 = (HANDLE *)(a1 + 176);
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
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(__int16 **)(a1 + 16);
  MiFreePartitionPhysicalPages(a1);
  *(_QWORD *)(a1 + 5736) -= MiDeletePagingFiles(a1);
  if ( v5 == MiSystemPartition )
  {
    MiReturnResidentAvailable(*(_QWORD *)(a1 + 5568));
    _InterlockedExchangeAdd64(&qword_14034F8F8, *(_QWORD *)(a1 + 5568));
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 696, *(_QWORD *)(a1 + 5568));
  }
  if ( v5 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14034F908, *(_QWORD *)(a1 + 5568));
  v6 = *(_QWORD *)(a1 + 5736) - *(_QWORD *)(a1 + 5576);
  if ( v5 == MiSystemPartition )
  {
    MiReturnCommit((__int64)v5, v6);
    _InterlockedExchangeAdd64(&qword_14034FCE0, -(__int64)v6);
  }
  else
  {
    MiIncreaseCommitLimits((__int64)v5, v6, v6, 0, 0LL);
  }
  if ( v5 == MiSystemPartition )
  {
    v9 = *(_QWORD **)(a1 + 48);
    if ( v9 )
    {
      do
      {
        v10 = (_QWORD *)*v9;
        ExFreePoolWithTag(v9, 0);
        v9 = v10;
      }
      while ( v10 );
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    MiLockDynamicMemoryExclusive((__int64)v5, (__int64)CurrentThread, v7, v8);
    v12 = (volatile signed __int32 *)(v5 + 120);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5 + 120);
    }
    else
    {
      v15 = 0;
      if ( _interlockedbittestandset(v12, 0x1Fu) )
        v15 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v5 + 60);
      while ( 1 )
      {
        v16 = *v12;
        if ( (*v12 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v16 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v12, v16 | 0x40000000, v16);
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
    }
    v14 = *(_QWORD **)(a1 + 48);
    if ( v14 )
    {
      while ( *v14 )
        v14 = (_QWORD *)*v14;
      *v14 = *((_QWORD *)v5 + 6);
      *((_QWORD *)v5 + 6) = *(_QWORD *)(a1 + 48);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5 + 120, retaddr);
    else
      *v12 = 0;
    __writecr8(CurrentIrql);
    MiSortPartitionMdls(v5);
    MiUnlockDynamicMemoryExclusive((__int64)v5, (__int64)CurrentThread);
  }
  v17 = a1 + 24;
  if ( *(_QWORD *)(a1 + 24) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14034F0A0, &LockHandle);
    v18 = *(_QWORD *)v17;
    v19 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 || *v19 != v17 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v20 = *(void **)(a1 + 5256);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    *(_QWORD *)(a1 + 5256) = 0LL;
  }
  v21 = *(_QWORD *)(a1 + 144);
  if ( v21 )
    MiDereferencePageRuns(v21);
  v22 = *(_QWORD *)(a1 + 56);
  if ( v22 )
    MiDereferencePageRuns(v22);
}
