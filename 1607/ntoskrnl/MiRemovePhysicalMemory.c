/*
 * XREFs of MiRemovePhysicalMemory @ 0x1406582A4
 * Callers:
 *     MiDeleteExtentPfns @ 0x1401ED3BC (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1406585EC (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x140658ACC (MiRemoveMdlPages.c)
 *     MiAddFileOnlyPfns @ 0x14065A3C0 (MiAddFileOnlyPfns.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 *     MiDeleteFileOnlyPfns @ 0x14065ABC4 (MiDeleteFileOnlyPfns.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KePulseEvent @ 0x1400BCDA0 (KePulseEvent.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1401333E4 (MiUnlockDynamicMemoryExclusive.c)
 *     MiDescribePageRun @ 0x14013B830 (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401C63E8 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1401D1DE8 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x1401E1B1C (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x1401E1F9C (MiPerformMemoryChange.c)
 *     MiReduceCommitLimits @ 0x1401ECF74 (MiReduceCommitLimits.c)
 *     MiGetDanglingExtent @ 0x1401ED604 (MiGetDanglingExtent.c)
 *     MiFlushCacheRange @ 0x1401F47C8 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x14057B258 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x14065801C (MiConfigureMemoryRemoval.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 DanglingExtent; // r14
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r13d
  char v6; // si
  __int64 v7; // r12
  int v8; // ebx
  unsigned __int64 v10; // rsi
  unsigned int *i; // r13
  _QWORD *v12; // r15
  __int64 v13; // rax
  int v14; // eax
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int *v20; // rcx
  __int64 v21; // rax
  unsigned int *v22; // [rsp+38h] [rbp-39h] BYREF
  char *v23; // [rsp+40h] [rbp-31h] BYREF
  struct _KTHREAD *v24; // [rsp+48h] [rbp-29h]
  PVOID P[3]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v26[12]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v27; // [rsp+E0h] [rbp+6Fh] BYREF
  int v28; // [rsp+E8h] [rbp+77h]
  int v29; // [rsp+F0h] [rbp+7Fh]

  v28 = a3;
  v27 = a2;
  DanglingExtent = a1;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v24 = CurrentThread;
  v22 = 0LL;
  v6 = a3;
  v23 = 0LL;
  v7 = 0LL;
  v29 = v5;
  if ( (a3 & 2) != 0 )
  {
    v8 = 0;
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
    if ( (v6 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v27);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v10 = v27;
    goto LABEL_21;
  }
  v10 = v27;
  v26[0] = 0LL;
  v26[3] = v27;
  v26[2] = a1;
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  v8 = MiConfigureMemoryRemoval(&v23, (unsigned int *)MmPhysicalMemoryBlock, v26);
  if ( v8 < 0 )
  {
LABEL_28:
    v15 = v28;
    goto LABEL_29;
  }
  v7 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
  if ( !(unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v10) )
  {
    v8 = -1073741670;
    goto LABEL_28;
  }
  for ( i = (unsigned int *)v7; ; i = v22 )
  {
    v12 = P[0];
    if ( P[0] == P )
      break;
    v13 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v13 + 8) = P;
    v8 = MiConfigureMemoryRemoval(&v22, i, v12);
    ExFreePoolWithTag(v12, 0);
    if ( i != (unsigned int *)v7 )
      ExFreePoolWithTag(i - 4, 0);
    if ( v8 < 0 )
    {
      v5 = v29;
      goto LABEL_28;
    }
  }
  MiReduceCommitLimits(MiSystemPartition, v10, v10);
  MiReturnCommit((__int64)MiSystemPartition, v10);
  MiPerformMemoryChange(DanglingExtent, v10, (void **)&v23, (__int64 *)&v22, 0);
  MiComputeNodeMemory((__int64)MiSystemPartition);
  v14 = -1;
  if ( qword_140324E10 <= 0xFFFFFFFF )
    v14 = qword_140324E10;
  MEMORY[0xFFFFF780000002E8] = v14;
  KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v10 - 1, 2);
  v5 = v29;
LABEL_21:
  v15 = v28;
  MiInitializeDynamicPfns(DanglingExtent, v10, 0, v28);
  qword_1403235F8 += v10;
  if ( (unsigned __int64)qword_1403235F8 >= 0x5555 && !byte_1403235F0 )
  {
    stru_1403235D0.List.Flink = 0LL;
    stru_1403235D0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
    stru_1403235D0.Parameter = MiSystemPartition;
    ExQueueWorkItem(&stru_1403235D0, DelayedWorkQueue);
    byte_1403235F0 = 1;
  }
  if ( !v5 )
  {
    KePulseEvent(qword_1403236D8, 0, 0);
    MiFlushEntireTbDueToAttributeChange(v17, v16, v18, v19);
    MiFlushCacheRange(DanglingExtent, v10);
  }
LABEL_29:
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)v24);
  if ( v23 )
    ExFreePoolWithTag(v23 - 16, 0);
  if ( !v22 )
    goto LABEL_34;
  v20 = v22 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v20, 0);
LABEL_34:
    v20 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    v21 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v21 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v21 + 8) = P;
  }
  if ( v7 )
    MiDereferencePageRuns(v7);
  if ( v8 >= 0 && (v15 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v8;
}
