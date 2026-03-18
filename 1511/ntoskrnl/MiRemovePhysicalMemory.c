/*
 * XREFs of MiRemovePhysicalMemory @ 0x140622D58
 * Callers:
 *     MiDeleteExtentPfns @ 0x1401E349C (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1406230A8 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14062358C (MiRemoveMdlPages.c)
 *     MiAddFileOnlyPfns @ 0x14062C408 (MiAddFileOnlyPfns.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 *     MiDeleteFileOnlyPfns @ 0x14062C984 (MiDeleteFileOnlyPfns.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140126D68 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     MiDescribePageRun @ 0x140131A08 (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401B875C (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1401C3254 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x1401D1AA4 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x1401D1E3C (MiPerformMemoryChange.c)
 *     MiReduceCommitLimits @ 0x1401DBF84 (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x1401E1D4C (MiFlushCacheRange.c)
 *     MiGetDanglingExtent @ 0x1401E36E4 (MiGetDanglingExtent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x140546CC0 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x140622A24 (MiConfigureMemoryRemoval.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // r12
  int v5; // r13d
  char v6; // si
  __int64 DanglingExtent; // r15
  int v8; // ebx
  __int64 v10; // rsi
  unsigned int *i; // r13
  _QWORD *v12; // r14
  __int64 v13; // rax
  unsigned int *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+38h] [rbp-39h]
  unsigned int *v17; // [rsp+40h] [rbp-31h] BYREF
  char *v18; // [rsp+48h] [rbp-29h] BYREF
  PVOID P[3]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v20[12]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v21; // [rsp+E0h] [rbp+6Fh] BYREF
  int v22; // [rsp+E8h] [rbp+77h]
  int v23; // [rsp+F0h] [rbp+7Fh]

  v22 = a3;
  v21 = a2;
  v3 = 0LL;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v17 = 0LL;
  v6 = a3;
  v16 = 0LL;
  DanglingExtent = a1;
  v18 = 0LL;
  v23 = v5;
  if ( (a3 & 2) != 0 )
  {
    v8 = 0;
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
    if ( (v6 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v21);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v10 = v21;
LABEL_19:
    MiInitializeDynamicPfns(DanglingExtent, v10, v22);
    qword_1402FFDB0 += v10;
    if ( (unsigned __int64)qword_1402FFDB0 >= 0x5555 && !byte_1402FFDA8 )
    {
      stru_1402FFD88.Parameter = MiSystemPartition;
      stru_1402FFD88.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_1402FFD88.List.Flink = 0LL;
      ExQueueWorkItem(&stru_1402FFD88, DelayedWorkQueue);
      byte_1402FFDA8 = 1;
    }
    if ( !v5 )
      KePulseEvent(qword_1402FFE90, 0, 0);
    v3 = v16;
  }
  else
  {
    v10 = v21;
    v20[2] = a1;
    v20[3] = v21;
    v20[0] = 0LL;
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
    v8 = MiConfigureMemoryRemoval(&v18, (unsigned int *)MmPhysicalMemoryBlock, v20);
    if ( v8 >= 0 )
    {
      v16 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
      v3 = v16;
      if ( (unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v10) )
      {
        for ( i = (unsigned int *)v16; ; i = v17 )
        {
          v12 = P[0];
          if ( P[0] == P )
          {
            MiReduceCommitLimits(MiSystemPartition, v10, v10);
            MiReturnCommit((__int64)MiSystemPartition, v10);
            _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFF780000002E8LL, -(int)v10);
            v10 = v21;
            MiPerformMemoryChange(DanglingExtent, v21, (void **)&v18, (__int64 *)&v17, 0);
            MiComputeNodeMemory();
            KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v10 - 1, 2u);
            v5 = v23;
            goto LABEL_19;
          }
          v13 = *(_QWORD *)P[0];
          if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
            __fastfail(3u);
          P[0] = *(PVOID *)P[0];
          *(_QWORD *)(v13 + 8) = P;
          v8 = MiConfigureMemoryRemoval(&v17, i, v12);
          ExFreePoolWithTag(v12, 0);
          v3 = v16;
          if ( i != (unsigned int *)v16 )
            ExFreePoolWithTag(i - 4, 0);
          if ( v8 < 0 )
            break;
        }
        v5 = v23;
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( v18 )
    ExFreePoolWithTag(v18 - 16, 0);
  if ( !v17 )
    goto LABEL_32;
  v14 = v17 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v14, 0);
LABEL_32:
    v14 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    v15 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v15 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v15 + 8) = P;
  }
  if ( v3 )
    MiDereferencePageRuns(v3);
  if ( v8 >= 0 )
  {
    ++dword_1402FE710;
    HvlFlushTbAllPartitions((__int64)v14);
    KeFlushTb(3u, 2u);
    MiFlushCacheRange(DanglingExtent, v10);
    if ( (v22 & 8) == 0 && !v5 )
      IoUpdateDumpPhysicalRanges();
  }
  return (unsigned int)v8;
}
