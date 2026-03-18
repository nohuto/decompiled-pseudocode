/*
 * XREFs of MiInsertPartitionPages @ 0x1401D9510
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1401D8F48 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140624578 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140126D68 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     MiIncreaseCommitLimits @ 0x14013A344 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x14013A420 (MiComputeCommitThresholds.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     MiClearChildPartitionMdl @ 0x1401D9088 (MiClearChildPartitionMdl.c)
 *     MiSortPartitionMdls @ 0x1401D9E48 (MiSortPartitionMdls.c)
 *     MiReduceCommitLimits @ 0x1401DBF84 (MiReduceCommitLimits.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertPartitionPages(int *a1, __int64 a2, unsigned int *a3, int a4)
{
  __int16 v4; // bx
  unsigned __int64 v5; // r15
  unsigned int *v6; // r14
  int *v7; // rdi
  unsigned __int64 v9; // rsi
  unsigned int *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r12
  __int64 v14; // rbx
  KIRQL v15; // al
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-78h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-68h]
  unsigned int *v19; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  __int16 v22; // [rsp+C0h] [rbp+18h]
  int v23; // [rsp+C8h] [rbp+20h]

  v23 = a4;
  v4 = *(_WORD *)a2;
  v5 = 0LL;
  v22 = *(_WORD *)a2;
  v6 = a3;
  CurrentThread = KeGetCurrentThread();
  v7 = (int *)a2;
  if ( a3 )
  {
    do
    {
      v9 = (unsigned __int64)v6[10] >> 12;
      v5 += v9;
      v19 = *(unsigned int **)v6;
      if ( a4 >= 0 )
      {
        v10 = v6 + 12;
        qsort(v6 + 12, v9, 8uLL, MiPartitionMdlPageSort);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v13 = (unsigned __int64)(v4 & 0x3FF) << 40;
        do
        {
          v14 = 48LL * *(_QWORD *)v10 - 0x58000000000LL;
          MiLockPageAtDpcInline(v14, v11, v12);
          *(_QWORD *)(v14 + 40) = v13 | *(_QWORD *)(v14 + 40) & 0xFFFC00FFFFFFFFFFuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v10 += 2;
        }
        while ( v10 != &v6[2 * v9 + 12] );
        __writecr8(CurrentIrql);
        v7 = (int *)a2;
        if ( a1 != MiSystemPartition )
        {
          MiClearChildPartitionMdl((__int64)a1, (__int64)v6);
          MiReduceCommitLimits(a1, v9, v9);
          MiReturnCommit((__int64)a1, v9);
        }
        if ( (int *)a2 != MiSystemPartition )
        {
          MiLockDynamicMemoryExclusive(a2, (__int64)CurrentThread);
          v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 224));
          v16 = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(a2 + 5712) += v9;
          *(_QWORD *)v6 = v16;
          *(_QWORD *)(a2 + 48) = v6;
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 224), v15);
          MiIncreaseCommitLimits(a2, v9, v9, 1, 0LL);
        }
        MiFreePagesFromMdl(a2, (ULONG_PTR)v6, 0);
        if ( (int *)a2 != MiSystemPartition )
        {
          MiSortPartitionMdls(a2);
          MiUnlockDynamicMemoryExclusive(a2, (__int64)CurrentThread);
          if ( a1 == MiSystemPartition )
            _InterlockedExchangeAdd64(&qword_1402FF480, v9);
          goto LABEL_5;
        }
      }
      else
      {
        MiFreePagesFromMdl((__int64)a1, (ULONG_PTR)v6, 0);
      }
      ExFreePoolWithTag(v6, 0);
LABEL_5:
      a4 = v23;
      v6 = v19;
      v4 = v22;
    }
    while ( v19 );
  }
  if ( a4 >= 0 )
  {
    if ( a1 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FEC30, v5);
    if ( v7 != MiSystemPartition )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v7 + 629, &LockHandle);
      MiComputeCommitThresholds(v7);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
