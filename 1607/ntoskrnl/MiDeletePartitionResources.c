/*
 * XREFs of MiDeletePartitionResources @ 0x1401F11FC
 * Callers:
 *     MiDereferencePartitionFinal @ 0x1401F1798 (MiDereferencePartitionFinal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiFreePageFileHashPfns @ 0x1400BC788 (MiFreePageFileHashPfns.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiUnlinkWorkingSet @ 0x1400FF204 (MiUnlinkWorkingSet.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1401333E4 (MiUnlockDynamicMemoryExclusive.c)
 *     MiIncreaseCommitLimits @ 0x140142F68 (MiIncreaseCommitLimits.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     ZwWaitForSingleObject @ 0x14015A270 (ZwWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CcDeleteSectionsForPartition @ 0x1401B24D8 (CcDeleteSectionsForPartition.c)
 *     MiMergePageNodes @ 0x1401F1CB8 (MiMergePageNodes.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     MiDeletePagingFiles @ 0x14065AFE8 (MiDeletePagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x140660698 (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1406608E0 (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiDeletePartitionResources(__int64 a1)
{
  __int16 v1; // bx
  char *v3; // r14
  int *v4; // r13
  HANDLE *v5; // rbx
  __int64 v6; // rbp
  HANDLE v7; // rsi
  int *v8; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // rcx
  int *v11; // rbp
  struct _KTHREAD *v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v16; // rcx
  struct _KPROCESS *Process; // rax
  unsigned __int64 v18; // rcx
  int v19; // eax
  __int16 v20; // ax
  unsigned __int64 v21; // rsi
  PVOID *v22; // rax
  PVOID *v23; // rsi
  PVOID *v24; // rax
  PVOID *v25; // rbp
  PVOID *v26; // rcx
  KIRQL v27; // al
  _QWORD *v28; // rcx
  _QWORD *v29; // rsi
  _QWORD *v30; // rax
  unsigned __int64 v31; // rbp
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  bool v34; // r8
  _QWORD *v35; // rax
  PVOID *v36; // rax
  PVOID *v37; // rbx
  PVOID *v38; // rax
  PVOID *v39; // rsi
  PVOID *v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  void *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  KIRQL v49; // [rsp+A0h] [rbp+8h]
  _QWORD *v50; // [rsp+B0h] [rbp+18h] BYREF

  v1 = *(_WORD *)a1;
  v3 = 0LL;
  v50 = 0LL;
  CcDeleteSectionsForPartition((__int64 **)&CcDirtySharedCacheMapList, v1);
  CcDeleteSectionsForPartition((__int64 **)&CcCleanSharedCacheMapList, v1);
  KeSetEvent((PRKEVENT)(a1 + 144), 1, 0);
  v4 = MiSystemPartition;
  if ( *(_BYTE *)(a1 + 7200) == 1 )
  {
    MiUnlinkWorkingSet(a1 + 6592, 0LL);
    if ( (int *)a1 == MiSystemPartition )
      MiReturnResidentAvailable(*(_QWORD *)(a1 + 6696));
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), *(_QWORD *)(a1 + 6696));
  }
  v5 = (HANDLE *)(a1 + 168);
  v6 = 5LL;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      ZwWaitForSingleObject(*v5, 0, 0LL);
      ObCloseHandle(v7, 0);
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  MiFreePageFileHashPfns(a1);
  v8 = MiSystemPartition;
  if ( *(_QWORD *)(a1 + 24) )
    v8 = *(int **)(a1 + 24);
  *(_QWORD *)(a1 + 7336) -= MiDeletePagingFiles(a1);
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v11 = MiSystemPartition;
  v12 = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 24) )
    v11 = *(int **)(a1 + 24);
  v13 = (unsigned __int64)(v11 + 56);
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v12, v13, KeGetCurrentIrql(), 0LL);
  --v12->SpecialApcDisable;
  if ( !v12->AbEntrySummary )
  {
    if ( !v12->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v12, v13);
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = v12->AbOrphanedEntrySummary;
    v12->AbOrphanedEntrySummary = 0;
    v12->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v12->AbEntrySummary;
  _BitScanForward((unsigned int *)&v16, AbEntrySummary);
  v12->AbEntrySummary = AbEntrySummary & ~(1 << v16);
  v10 = 96 * v16;
  v3 = (char *)v12->LockEntries + v10;
  if ( !v3 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v12->116 + 1, 0xFu);
    goto LABEL_28;
  }
  if ( v13 < qword_140326950
    || v13 >= qword_140326950 + 0x8000000000LL
    || (Process = v12->ApcState.Process, (v18 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v19 = -1;
  }
  else
  {
    v19 = *(_DWORD *)(v18 + 8);
  }
  *((_DWORD *)v3 + 10) = v19;
  v10 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v3 + 4) = v13 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_28:
  v20 = v12->SpecialApcDisable + 1;
  v12->SpecialApcDisable = v20;
  if ( !v20 && ($2B8565053CDC740D4E4887693DD8AC9E *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery(v10);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13, v3, v13);
  if ( v3 )
    v3[26] |= 1u;
  MiFreePartitionPhysicalPages(a1);
  if ( v8 == MiSystemPartition )
    MiReturnResidentAvailable(*(_QWORD *)(a1 + 6528));
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 816, *(_QWORD *)(a1 + 6528));
  v21 = *(_QWORD *)(a1 + 7336) - *(_QWORD *)(a1 + 7208);
  if ( v8 != MiSystemPartition )
  {
    MiIncreaseCommitLimits((__int64)v8, v21, v21, 0, 0LL);
    v27 = ExAcquireSpinLockExclusive(v8 + 58);
    v28 = *(_QWORD **)(a1 + 56);
    v29 = 0LL;
    v49 = v27;
    while ( v28 )
    {
      v29 = v28;
      v28 = (_QWORD *)*v28;
    }
    if ( !v29 )
    {
LABEL_73:
      ExReleaseSpinLockExclusive(v8 + 58, v27);
      MiMakePartitionMemoryBlock(v8);
      goto LABEL_74;
    }
LABEL_56:
    v30 = (_QWORD *)v29[1];
    v31 = (unsigned __int64)v29;
    v32 = v29;
    if ( v30 )
    {
      do
      {
        v29 = v30;
        v30 = (_QWORD *)*v30;
      }
      while ( v30 );
    }
    else
    {
      while ( 1 )
      {
        v29 = (_QWORD *)(v29[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v29 || (_QWORD *)*v29 == v32 )
          break;
        v32 = v29;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), v31);
    if ( (unsigned int)MiMergePageNodes(v8, v31) != 1 )
      goto LABEL_71;
    v33 = v50;
    v34 = 0;
    if ( !v50 )
      goto LABEL_70;
    while ( 1 )
    {
      if ( (*(_QWORD *)(v31 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (v33[3] & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v35 = (_QWORD *)*v33;
        if ( !*v33 )
        {
          v34 = 0;
LABEL_70:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v50, (unsigned __int64)v33, v34, v31);
LABEL_71:
          if ( !v29 )
          {
            v27 = v49;
            goto LABEL_73;
          }
          goto LABEL_56;
        }
      }
      else
      {
        v35 = (_QWORD *)v33[1];
        if ( !v35 )
        {
          v34 = 1;
          goto LABEL_70;
        }
      }
      v33 = v35;
    }
  }
  MiReturnCommit((__int64)v8, v21);
  _InterlockedExchangeAdd64(&qword_140327928, -(__int64)v21);
  v22 = *(PVOID **)(a1 + 56);
  v23 = 0LL;
  while ( v22 )
  {
    v23 = v22;
    v22 = (PVOID *)*v22;
  }
  while ( v23 )
  {
    v24 = (PVOID *)v23[1];
    v25 = v23;
    v26 = v23;
    if ( v24 )
    {
      do
      {
        v23 = v24;
        v24 = (PVOID *)*v24;
      }
      while ( v24 );
    }
    else
    {
      while ( 1 )
      {
        v23 = (PVOID *)((unsigned __int64)v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v23 || *v23 == v26 )
          break;
        v26 = v23;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), (__int64)v25);
    ExFreePoolWithTag(v25[5], 0);
    ExFreePoolWithTag(v25, 0);
  }
LABEL_74:
  if ( *(_QWORD *)(a1 + 24) )
    v4 = *(int **)(a1 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4 + 28);
  KeAbPostRelease((ULONG_PTR)(v4 + 56));
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v36 = (PVOID *)v50;
  v37 = 0LL;
  while ( v36 )
  {
    v37 = v36;
    v36 = (PVOID *)*v36;
  }
  while ( v37 )
  {
    v38 = (PVOID *)v37[1];
    v39 = v37;
    v40 = v37;
    if ( v38 )
    {
      do
      {
        v37 = v38;
        v38 = (PVOID *)*v38;
      }
      while ( v38 );
    }
    else
    {
      while ( 1 )
      {
        v37 = (PVOID *)((unsigned __int64)v37[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v37 || *v37 == v40 )
          break;
        v40 = v37;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v50, (__int64)v39);
    ExFreePoolWithTag(v39[5], 0);
    ExFreePoolWithTag(v39, 0);
  }
  v41 = a1 + 32;
  if ( *(_QWORD *)(a1 + 32) )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v42 = *(_QWORD *)v41;
    v43 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(*(_QWORD *)v41 + 8LL) != v41 || *v43 != v41 )
      __fastfail(3u);
    *v43 = v42;
    *(_QWORD *)(v42 + 8) = v43;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v44 = *(void **)(a1 + 6248);
  if ( v44 )
  {
    ExFreePoolWithTag(v44, 0);
    *(_QWORD *)(a1 + 6248) = 0LL;
  }
  v45 = *(_QWORD *)(a1 + 136);
  if ( v45 )
    MiDereferencePageRuns(v45);
  v46 = *(_QWORD *)(a1 + 64);
  if ( v46 )
    MiDereferencePageRuns(v46);
  return MiDeleteLargePfnBitMap(a1);
}
