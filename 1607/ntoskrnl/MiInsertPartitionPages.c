/*
 * XREFs of MiInsertPartitionPages @ 0x1401F19A0
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406606BC (MiHotAddPartitionMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1401333E4 (MiUnlockDynamicMemoryExclusive.c)
 *     RtlNumberOfSetBitsEx @ 0x14013B248 (RtlNumberOfSetBitsEx.c)
 *     MiIncreaseCommitLimits @ 0x140142F68 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x140143044 (MiComputeCommitThresholds.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiReduceCommitLimits @ 0x1401ECF74 (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x1401F1074 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x1401F17F4 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x1401F18AC (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x1401F1CB8 (MiMergePageNodes.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiMakePartitionMemoryBlock @ 0x1406608E0 (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiInsertPartitionPages(__int16 *a1, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v7; // r15
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  __int16 *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  unsigned __int64 v16; // r12
  volatile LONG *v17; // rbx
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  KIRQL v22; // bl
  int v23; // eax
  KIRQL v24; // dl
  int v25; // edi
  _QWORD *v26; // rdx
  bool v27; // r8
  _QWORD *v28; // rax
  PVOID *v29; // rax
  PVOID *v30; // rbx
  PVOID *v31; // rax
  PVOID *v32; // rdi
  PVOID *v33; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int16 *v35[7]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v36; // [rsp+C0h] [rbp+40h] BYREF
  struct _KTHREAD *v37; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v38; // [rsp+D0h] [rbp+50h]

  v38 = a3;
  memset(&v35[1], 0, 0x30uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = *(unsigned __int64 **)a3;
  v36 = 0LL;
  v35[1] = a1;
  v8 = 0LL;
  v35[0] = (__int16 *)a2;
  v9 = (_QWORD *)*v7;
  v37 = CurrentThread;
  while ( v9 )
  {
    v8 = v9;
    v9 = (_QWORD *)*v9;
  }
  while ( v8 )
  {
    v10 = (_QWORD *)v8[1];
    v11 = (__int64)v8;
    v12 = v8;
    if ( v10 )
    {
      do
      {
        v8 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || (_QWORD *)*v8 == v12 )
          break;
        v12 = v8;
      }
    }
    MiActOnPartitionNodePages(v11, 7, v35);
  }
  if ( a1 == (__int16 *)MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_140327040, (unsigned __int64)v35[5]);
  }
  else
  {
    MiClearPartitionPageBitMap((__int64)a1, (_QWORD **)v7);
    v13 = v35[5];
    MiReduceCommitLimits(a1, (__int64)v35[5], (__int64)v35[5]);
    MiReturnCommit((__int64)a1, (unsigned __int64)v13);
    MiLockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
    MiMakePartitionMemoryBlock(a1);
    MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  }
  if ( (int *)a2 == MiSystemPartition )
  {
    MiFreePartitionTree((__int16 *)a2, v7, *(_DWORD *)(a3 + 24));
    goto LABEL_41;
  }
  MiLockDynamicMemoryExclusive(a2, (__int64)CurrentThread);
  v14 = (_QWORD *)*v7;
  v15 = 0LL;
  while ( v14 )
  {
    v15 = v14;
    v14 = (_QWORD *)*v14;
  }
  if ( v15 )
  {
    v16 = v38;
    v17 = (volatile LONG *)(a2 + 232);
    while ( 1 )
    {
      v18 = (unsigned __int64)v15;
      v19 = RtlNumberOfSetBitsEx(v15 + 4);
      v20 = (_QWORD *)v15[1];
      v21 = v15;
      v38 = v19;
      if ( v20 )
      {
        do
        {
          v15 = v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
      }
      else
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v15 || (_QWORD *)*v15 == v21 )
            break;
          v21 = v15;
        }
      }
      v22 = ExAcquireSpinLockExclusive(v17);
      RtlAvlRemoveNode(v7, v18);
      v23 = MiMergePageNodes(a2, v18);
      v24 = v22;
      v25 = v23;
      v17 = (volatile LONG *)(a2 + 232);
      *(_QWORD *)(a2 + 6288) += v38;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 232), v24);
      MiIncreaseCommitLimits(a2, v38, v38, 1, 0LL);
      MiFreePartitionNodePages((__int16 *)a2, v18, *(_DWORD *)(v16 + 24));
      if ( v25 != 1 )
        goto LABEL_38;
      v26 = v36;
      v27 = 0;
      if ( !v36 )
        goto LABEL_37;
      while ( (*(_QWORD *)(v18 + 24) & 0x7FFFFFFFFFFFFFFFuLL) >= (v26[3] & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v28 = (_QWORD *)v26[1];
        if ( !v28 )
        {
          v27 = 1;
          goto LABEL_37;
        }
LABEL_35:
        v26 = v28;
      }
      v28 = (_QWORD *)*v26;
      if ( *v26 )
        goto LABEL_35;
      v27 = 0;
LABEL_37:
      RtlAvlInsertNodeEx((unsigned __int64 *)&v36, (unsigned __int64)v26, v27, v18);
LABEL_38:
      if ( !v15 )
      {
        CurrentThread = v37;
        break;
      }
    }
  }
  MiMakePartitionMemoryBlock(a2);
  MiUnlockDynamicMemoryExclusive(a2, (__int64)CurrentThread);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 5672), &LockHandle);
  MiComputeCommitThresholds((_QWORD *)a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_41:
  v29 = (PVOID *)v36;
  v30 = 0LL;
  while ( v29 )
  {
    v30 = v29;
    v29 = (PVOID *)*v29;
  }
  while ( v30 )
  {
    v31 = (PVOID *)v30[1];
    v32 = v30;
    v33 = v30;
    if ( v31 )
    {
      do
      {
        v30 = v31;
        v31 = (PVOID *)*v31;
      }
      while ( v31 );
    }
    else
    {
      while ( 1 )
      {
        v30 = (PVOID *)((unsigned __int64)v30[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v30 || *v30 == v33 )
          break;
        v33 = v30;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v36, (__int64)v32);
    ExFreePoolWithTag(v32[5], 0);
    ExFreePoolWithTag(v32, 0);
  }
}
