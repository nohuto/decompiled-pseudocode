/*
 * XREFs of MiInsertPartitionPages @ 0x14021D494
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x14021CD0C (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406A3DD4 (MiHotAddPartitionMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14015A080 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     MiIncreaseCommitLimits @ 0x14016BCC8 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x14016BDA4 (MiComputeCommitThresholds.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiClearChildPartitionMdl @ 0x14021CE50 (MiClearChildPartitionMdl.c)
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     MiReduceCommitLimits @ 0x140220C38 (MiReduceCommitLimits.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertPartitionPages(__int16 *a1, __int64 a2, unsigned int *a3, int a4)
{
  __int16 v4; // di
  unsigned __int64 v5; // rax
  unsigned int *v6; // r14
  __int16 *v7; // rbx
  unsigned __int64 v9; // rsi
  unsigned int *v10; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  __int64 v14; // rdi
  unsigned int v15; // ebp
  volatile signed __int32 *v16; // rdi
  unsigned __int8 v17; // r12
  unsigned int v18; // ebp
  signed __int32 v19; // eax
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-78h]
  unsigned __int64 v22; // [rsp+38h] [rbp-70h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-60h]
  unsigned int *v24; // [rsp+50h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-50h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int16 v28; // [rsp+C0h] [rbp+18h]
  int v29; // [rsp+C8h] [rbp+20h]

  v29 = a4;
  v4 = *(_WORD *)a2;
  v5 = 0LL;
  v28 = *(_WORD *)a2;
  v6 = a3;
  CurrentThread = KeGetCurrentThread();
  v7 = (__int16 *)a2;
  if ( a3 )
  {
    do
    {
      v9 = (unsigned __int64)v6[10] >> 12;
      v24 = *(unsigned int **)v6;
      v22 = v9 + v5;
      if ( a4 >= 0 )
      {
        v10 = v6 + 12;
        qsort(v6 + 12, v9, 8uLL, (int (__cdecl *)(const void *, const void *))MiPartitionMdlPageSort);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v13 = (unsigned __int64)(v4 & 0x3FF) << 40;
        do
        {
          v14 = 48LL * *(_QWORD *)v10 - 0x58000000000LL;
          v15 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v15);
            }
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          *(_QWORD *)(v14 + 40) = v13 | *(_QWORD *)(v14 + 40) & 0xFFFC00FFFFFFFFFFuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v10 += 2;
        }
        while ( v10 != &v6[2 * v9 + 12] );
        __writecr8(CurrentIrql);
        v7 = (__int16 *)a2;
        if ( a1 != MiSystemPartition )
        {
          MiClearChildPartitionMdl((__int64)a1, (__int64)v6, v11, v12);
          MiReduceCommitLimits(a1, v9, v9);
          MiReturnCommit((__int64)a1, v9);
        }
        if ( (__int16 *)a2 != MiSystemPartition )
        {
          MiLockDynamicMemoryExclusive(a2, (__int64)CurrentThread, v11, v12);
          v16 = (volatile signed __int32 *)(a2 + 240);
          v17 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2 + 240);
          }
          else
          {
            v18 = 0;
            if ( _interlockedbittestandset(v16, 0x1Fu) )
              v18 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a2 + 240));
            while ( 1 )
            {
              v19 = *v16;
              if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
                break;
              if ( (v19 & 0x40000000) == 0 )
                _InterlockedCompareExchange(v16, v19 | 0x40000000, v19);
              if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v18);
            }
          }
          v20 = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(a2 + 5328) += v9;
          *(_QWORD *)v6 = v20;
          *(_QWORD *)(a2 + 48) = v6;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2 + 240, retaddr);
          else
            *v16 = 0;
          __writecr8(v17);
          MiIncreaseCommitLimits(a2, v9, v9, 1, 0LL);
        }
        MiFreePagesFromMdl(a2, (ULONG_PTR)v6, 0);
        if ( (__int16 *)a2 != MiSystemPartition )
        {
          MiSortPartitionMdls(a2);
          MiUnlockDynamicMemoryExclusive(a2, (__int64)CurrentThread);
          if ( a1 == MiSystemPartition )
            _InterlockedExchangeAdd64(&qword_14034F900, v9);
          goto LABEL_5;
        }
      }
      else
      {
        MiFreePagesFromMdl((__int64)a1, (ULONG_PTR)v6, 0);
      }
      ExFreePoolWithTag(v6, 0);
LABEL_5:
      a4 = v29;
      v6 = v24;
      v4 = v28;
      v5 = v22;
    }
    while ( v24 );
  }
  if ( a4 >= 0 )
  {
    if ( a1 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034F0F0, v5);
    if ( v7 != MiSystemPartition )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v7 + 597, &LockHandle);
      MiComputeCommitThresholds(v7);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
