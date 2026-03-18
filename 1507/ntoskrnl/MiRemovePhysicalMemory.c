/*
 * XREFs of MiRemovePhysicalMemory @ 0x1406A1FE8
 * Callers:
 *     MmRemovePhysicalMemory @ 0x1406A228C (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1406A28CC (MiRemoveMdlPages.c)
 *     MiAddFileOnlyPfns @ 0x1406AA220 (MiAddFileOnlyPfns.c)
 *     MiCreateFileOnlyPfns @ 0x1406AA3C8 (MiCreateFileOnlyPfns.c)
 *     MiReturnFsDirectPages @ 0x1406AA504 (MiReturnFsDirectPages.c)
 * Callees:
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     HvlFlushTbAllPartitions @ 0x1400E6968 (HvlFlushTbAllPartitions.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14015A080 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     MiDescribePageRun @ 0x14015F634 (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F3AD8 (IoUpdateDumpPhysicalRanges.c)
 *     MiInitializeDynamicPfns @ 0x140212A54 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x140212ECC (MiPerformMemoryChange.c)
 *     MiReduceCommitLimits @ 0x140220C38 (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x14022D8D8 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x14059AD7C (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x1406A1D5C (MiConfigureMemoryRemoval.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rdi
  int v8; // r13d
  int v9; // ebx
  unsigned int *i; // r14
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int *v17; // rcx
  __int64 v18; // rax
  char *v20; // [rsp+30h] [rbp-50h] BYREF
  struct _KTHREAD *v21; // [rsp+38h] [rbp-48h]
  PVOID P[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v23[5]; // [rsp+58h] [rbp-28h] BYREF
  char v25; // [rsp+D0h] [rbp+50h]
  unsigned int *v26; // [rsp+D8h] [rbp+58h] BYREF

  v25 = a3;
  v26 = 0LL;
  v4 = 0LL;
  P[1] = P;
  P[2] = 0LL;
  v20 = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v7 = a1;
  v21 = CurrentThread;
  v8 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v9 = 0;
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread, a3, a4);
LABEL_16:
    MiInitializeDynamicPfns(v7, a2, 0);
    if ( !v8 )
      KePulseEvent(qword_140353E60, 0, 0);
  }
  else
  {
    v23[0] = 0LL;
    v23[2] = a1;
    v23[3] = a2;
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread, a3, a4);
    v9 = MiConfigureMemoryRemoval(&v20, (unsigned int *)MmPhysicalMemoryBlock, v23);
    if ( v9 >= 0 )
    {
      v4 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
      if ( (unsigned int)MiDescribePageRun((__int64)P, v7, a2) )
      {
        for ( i = (unsigned int *)v4; ; i = v26 )
        {
          v11 = P[0];
          if ( P[0] == P )
          {
            MiReduceCommitLimits(MiSystemPartition, a2, a2);
            MiReturnCommit((__int64)MiSystemPartition, a2);
            _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFF780000002E8LL, -(int)a2);
            v7 = a1;
            MiPerformMemoryChange(a1, a2, (void **)&v20, (__int64 *)&v26, 0);
            MiComputeNodeMemory(v14, v13, v15, v16);
            goto LABEL_16;
          }
          v12 = *(_QWORD *)P[0];
          if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v12 + 8) != P[0] )
            __fastfail(3u);
          P[0] = *(PVOID *)P[0];
          *(_QWORD *)(v12 + 8) = P;
          v9 = MiConfigureMemoryRemoval(&v26, i, v11);
          ExFreePoolWithTag(v11, 0);
          if ( i != (unsigned int *)v4 )
            ExFreePoolWithTag(i - 4, 0);
          if ( v9 < 0 )
            break;
        }
        v7 = a1;
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)v21);
  if ( v20 )
    ExFreePoolWithTag(v20 - 16, 0);
  if ( !v26 )
    goto LABEL_24;
  v17 = v26 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v17, 0);
LABEL_24:
    v17 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    v18 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v18 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v18 + 8) = P;
  }
  if ( v4 )
    MiDereferencePageRuns(v4);
  if ( v9 >= 0 )
  {
    ++dword_14034EBC8;
    HvlFlushTbAllPartitions((__int64)v17);
    KeFlushTb(3, 2);
    MiFlushCacheRange(v7, a2);
    if ( (v25 & 8) == 0 && !v8 )
      IoUpdateDumpPhysicalRanges();
  }
  return (unsigned int)v9;
}
