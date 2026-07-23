/*
 * XREFs of MiAddPhysicalMemory @ 0x1406576C0
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140657C3C (MiAddPhysicalMemoryChunks.c)
 *     MiAddFileOnlyPfns @ 0x14065A3C0 (MiAddFileOnlyPfns.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiInitializeNumaRanges @ 0x1400B3A90 (MiInitializeNumaRanges.c)
 *     KePulseEvent @ 0x1400BCDA0 (KePulseEvent.c)
 *     MiPageTablesNeeded @ 0x140100298 (MiPageTablesNeeded.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1401333E4 (MiUnlockDynamicMemoryExclusive.c)
 *     MiDescribePageRun @ 0x14013B830 (MiDescribePageRun.c)
 *     MiReleaseNonPagedResources @ 0x14013F08C (MiReleaseNonPagedResources.c)
 *     MiIncreaseCommitLimits @ 0x140142F68 (MiIncreaseCommitLimits.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401C63E8 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1401D1DE8 (KeConfigureDynamicMemory.c)
 *     MiAcquireNonPagedResources @ 0x1401E1950 (MiAcquireNonPagedResources.c)
 *     MiEnableNewPfns @ 0x1401E19A0 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x1401E1F9C (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x1401ED3BC (MiDeleteExtentPfns.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiSplitMirrorBitMap @ 0x14052F7A4 (MiSplitMirrorBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x140576624 (MiSplitLargePfnBitMap.c)
 *     MiComputeNodeMemory @ 0x14057B258 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x140657CE0 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x14065820C (MiMapNewPfns.c)
 *     MmIsExtentDangling @ 0x14065AD64 (MmIsExtentDangling.c)
 */

__int64 __fastcall MiAddPhysicalMemory(int *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  unsigned __int8 *v4; // rbp
  unsigned int v8; // r15d
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // r13
  int v15; // r12d
  int v16; // ebx
  unsigned __int64 IsExtentDangling; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // rdx
  unsigned int v24; // ebx
  __int64 i; // rax
  unsigned __int8 *v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned __int8 *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  char v35; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int8 *)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL);
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a3 & 0xFFF) != 0 )
    return 3221225712LL;
  v8 = a4 | 1;
  v9 = *(_QWORD *)a2 >> 12;
  v10 = *(_QWORD *)a3 >> 12;
  v11 = v10 + v9;
  if ( v9 >= v10 + v9 )
    return 3221225711LL;
  v12 = qword_140326AD0;
  if ( qword_140326AD0 > ((unsigned __int64)qword_140326A40 >> 12) - 1 )
    v12 = ((unsigned __int64)qword_140326A40 >> 12) - 1;
  if ( v11 - 1 > v12 )
  {
    if ( (v8 & 2) != 0 )
      return 3221225712LL;
    v11 = v12 + 1;
    v10 = v12 + 1 - v9;
  }
  if ( v9 >= v11 )
    return 3221225711LL;
  if ( v10 + v9 >= qword_1403273A0 && v9 < qword_1403273A0 + 2048 || v10 + v9 >= 0xFFFFFFFFALL )
    return 3221225496LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = ((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 32;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = CurrentThread;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = ((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 32;
  v14 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  if ( a1 == MiSystemPartition )
  {
    *v4 = 0;
  }
  else
  {
    *v4 = 1;
    v8 |= 4u;
  }
  v15 = v8 & 2;
  *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v15;
  if ( (v8 & 2) != 0 )
    MiDeleteExtentPfns(0LL);
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  v16 = MiInitializeNumaRanges();
  if ( v16 >= 0 )
  {
    IsExtentDangling = MmIsExtentDangling(v9, v10);
    if ( IsExtentDangling >= v9 && IsExtentDangling < v11 )
    {
LABEL_25:
      v16 = -1073741800;
      v18 = 0LL;
      goto LABEL_61;
    }
    if ( (v8 & 2) == 0 )
    {
      if ( qword_140324E10 + v10 > qword_140326A30 )
      {
        v10 = qword_140326A30 - qword_140324E10;
        v11 = qword_140326A30 - qword_140324E10 + v9;
      }
      v22 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
      *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v22;
      v18 = v22;
      if ( v9 >= v11 )
      {
        v16 = -1073741585;
        goto LABEL_61;
      }
      v16 = KeConfigureDynamicMemory(v9, v11 - 1, 0);
      if ( v16 >= 0 )
      {
        if ( (unsigned int)MiDescribePageRun((__int64)(v4 + 32), v9, v10) )
        {
          v23 = MmPhysicalMemoryBlock;
          *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v9;
          *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v10;
          v16 = MiConfigureMemoryInsertion(v4 + 56, v23, v4 + 80);
          if ( v16 < 0 )
            goto LABEL_61;
          if ( (unsigned int)MiSplitLargePfnBitMap((__int64)MiSystemPartition, v9, v10) )
          {
            v24 = 0;
            while ( (unsigned int)MiSplitMirrorBitMap(&stru_1403270A8.SizeOfBitMap + 2 * v24, v9, v10) )
            {
              if ( ++v24 >= 2 )
              {
                for ( i = v18; ; i = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) )
                {
                  v26 = *(unsigned __int8 **)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
                  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = i;
                  if ( v26 == v4 + 32 )
                    break;
                  v27 = *(_QWORD *)v26;
                  if ( *((unsigned __int8 **)v26 + 1) != v4 + 32 || *(unsigned __int8 **)(v27 + 8) != v26 )
                    __fastfail(3u);
                  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v27;
                  *(_QWORD *)(v27 + 8) = v4 + 32;
                  v16 = MiConfigureMemoryInsertion(v4 + 24, i, v26);
                  ExFreePoolWithTag(v26, 0);
                  v28 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
                  v18 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
                  if ( v28 != v18 )
                    ExFreePoolWithTag((PVOID)(v28 - 16), 0);
                  v14 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                  if ( v16 < 0 )
                    goto LABEL_61;
                }
                v15 = *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                goto LABEL_57;
              }
            }
          }
        }
        goto LABEL_60;
      }
LABEL_61:
      MiUnlockDynamicMemoryExclusive(
        (__int64)MiSystemPartition,
        *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48));
      v31 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
      if ( v31 )
        ExFreePoolWithTag((PVOID)(v31 - 16), 0);
      if ( !v14 )
        goto LABEL_66;
      v32 = (unsigned __int8 *)(v14 - 16);
      while ( 1 )
      {
        ExFreePoolWithTag(v32, 0);
LABEL_66:
        v32 = *(unsigned __int8 **)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        if ( v32 == v4 + 32 )
          break;
        v33 = *(_QWORD *)v32;
        if ( *((unsigned __int8 **)v32 + 1) != v4 + 32 || *(unsigned __int8 **)(v33 + 8) != v32 )
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v33;
        *(_QWORD *)(v33 + 8) = v4 + 32;
      }
      if ( !*(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
      {
        if ( v18 )
          MiDereferencePageRuns(v18);
        if ( v16 >= 0 )
          IoUpdateDumpPhysicalRanges();
      }
      return (unsigned int)v16;
    }
    v19 = 0LL;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      v20 = (char *)MmPhysicalMemoryBlock + 24;
      do
      {
        v21 = *(v20 - 1);
        if ( *v20 )
        {
          if ( v9 >= v21 )
          {
            if ( v9 < *v20 + v21 )
              goto LABEL_25;
          }
          else if ( v11 > v21 )
          {
            goto LABEL_25;
          }
        }
        ++v19;
        v20 += 2;
      }
      while ( v19 < *(unsigned int *)MmPhysicalMemoryBlock );
    }
LABEL_57:
    v29 = MiPageTablesNeeded(48 * v9 - 0x58000000000LL, 48 * v11 - 0x58000000001LL, 0, 0);
    v30 = v29;
    if ( v29 && !(unsigned int)MiAcquireNonPagedResources(MiSystemPartition, v29) )
    {
      v18 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
LABEL_60:
      v16 = -1073741670;
      goto LABEL_61;
    }
    if ( !v15 )
    {
      if ( !(unsigned int)MiIncreaseCommitLimits((__int64)MiSystemPartition, v10, v10, *v4, 0LL) )
      {
        if ( v30 )
          MiReleaseNonPagedResources((__int64)MiSystemPartition, v30);
        v16 = -1073741523;
LABEL_75:
        v18 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        goto LABEL_61;
      }
      KeConfigureDynamicMemory(v9, v11 - 1, 1);
    }
    MiMapNewPfns(v9, v11, *(unsigned __int16 *)a1, v8);
    *(_QWORD *)a3 = v10 << 12;
    if ( !v15 )
    {
      MiPerformMemoryChange(v9, v10, (void **)v4 + 7, (__int64 *)v4 + 3, v8);
      MiComputeNodeMemory((__int64)MiSystemPartition);
      v34 = -1;
      if ( qword_140324E10 <= 0xFFFFFFFF )
        v34 = qword_140324E10;
      MEMORY[0xFFFFF780000002E8] = v34;
      if ( (v8 & 0x40) == 0 )
        MiUpdateLargePageBitMap((__int64)MiSystemPartition, v9, ((v11 + 511) >> 9) - (v9 >> 9), 0, 0);
      if ( (v8 & 4) == 0 )
        MiEnableNewPfns(v9, v11);
      KePulseEvent(qword_1403236D8, 0, 0);
      v14 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    }
    v16 = 0;
    goto LABEL_75;
  }
  MiUnlockDynamicMemoryExclusive(
    (__int64)MiSystemPartition,
    *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48));
  return (unsigned int)v16;
}
