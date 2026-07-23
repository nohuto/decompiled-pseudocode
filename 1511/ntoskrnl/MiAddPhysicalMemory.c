/*
 * XREFs of MiAddPhysicalMemory @ 0x140622114
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140622644 (MiAddPhysicalMemoryChunks.c)
 *     MiAddFileOnlyPfns @ 0x14062C408 (MiAddFileOnlyPfns.c)
 * Callees:
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     MiPageTablesNeeded @ 0x140017A6C (MiPageTablesNeeded.c)
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     MiAcquireNonPagedResources @ 0x1400E8A40 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     RtlInterlockedClearBitRunEx @ 0x1401183B4 (RtlInterlockedClearBitRunEx.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140126D68 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     MiDescribePageRun @ 0x140131A08 (MiDescribePageRun.c)
 *     MiInitializeNumaRanges @ 0x140132088 (MiInitializeNumaRanges.c)
 *     MiIncreaseCommitLimits @ 0x14013A344 (MiIncreaseCommitLimits.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401B875C (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1401C3254 (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x1401D197C (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x1401D1E3C (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x1401E349C (MiDeleteExtentPfns.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiSplitMirrorBitMap @ 0x1404F6148 (MiSplitMirrorBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x140520918 (MiSplitLargePfnBitMap.c)
 *     MiComputeNodeMemory @ 0x140546CC0 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x1406226E8 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x140622C14 (MiMapNewPfns.c)
 *     MmIsExtentDangling @ 0x14062CA40 (MmIsExtentDangling.c)
 */

__int64 __fastcall MiAddPhysicalMemory(int *a1, __int64 *a2, __int64 *a3, int a4)
{
  unsigned __int8 *v4; // rbp
  unsigned int v6; // r12d
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // r13
  int v12; // r15d
  int v13; // ebx
  unsigned __int64 IsExtentDangling; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rdx
  unsigned int v21; // ebx
  __int64 i; // rax
  unsigned __int8 *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int8 *v29; // rcx
  __int64 v30; // rax
  char v31; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int8 *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL);
  if ( (*(_DWORD *)a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*(_DWORD *)a3 & 0xFFF) != 0 )
    return 3221225712LL;
  v6 = a4 | 1;
  v7 = *a2 >> 12;
  v8 = *a3 >> 12;
  v9 = v8 + v7;
  if ( v7 >= v8 + v7 )
    return 3221225711LL;
  if ( v9 - 1 > qword_1402FE758 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225712LL;
    v9 = qword_1402FE758 + 1;
    v8 = qword_1402FE758 + 1 - v7;
  }
  if ( v7 >= v9 )
    return 3221225711LL;
  if ( v8 + v7 >= qword_1402FEF60 && v7 < qword_1402FEF60 + 2048 || v8 + v7 >= 0xFFFFFFFFCLL )
    return 3221225496LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = ((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 32;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = CurrentThread;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = ((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 32;
  v11 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  if ( a1 == MiSystemPartition )
  {
    *v4 = 0;
  }
  else
  {
    *v4 = 1;
    v6 = a4 | 5;
  }
  v12 = v6 & 2;
  *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v12;
  if ( (v6 & 2) != 0 )
    MiDeleteExtentPfns(0LL);
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  v13 = MiInitializeNumaRanges();
  if ( v13 >= 0 )
  {
    IsExtentDangling = MmIsExtentDangling(v7, v8);
    if ( IsExtentDangling >= v7 && IsExtentDangling < v9 )
    {
LABEL_23:
      v13 = -1073741800;
      v15 = 0LL;
      goto LABEL_59;
    }
    if ( (v6 & 2) == 0 )
    {
      if ( qword_140301390 + v8 > qword_1402FE700 )
      {
        v8 = qword_1402FE700 - qword_140301390;
        v9 = qword_1402FE700 - qword_140301390 + v7;
      }
      v19 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
      *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v19;
      v15 = v19;
      if ( v7 >= v9 )
      {
        v13 = -1073741585;
        goto LABEL_59;
      }
      v13 = KeConfigureDynamicMemory(v7, v9 - 1, 0);
      if ( v13 >= 0 )
      {
        if ( (unsigned int)MiDescribePageRun((__int64)(v4 + 32), v7, v8) )
        {
          v20 = MmPhysicalMemoryBlock;
          *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v7;
          *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v8;
          v13 = MiConfigureMemoryInsertion(v4 + 56, v20, v4 + 80);
          if ( v13 < 0 )
            goto LABEL_59;
          if ( (unsigned int)MiSplitLargePfnBitMap(v7, v8) )
          {
            v21 = 0;
            while ( (unsigned int)MiSplitMirrorBitMap(&stru_1402FEC98.SizeOfBitMap + 2 * v21, v7, v8) )
            {
              if ( ++v21 >= 2 )
              {
                for ( i = v15; ; i = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
                {
                  v23 = *(unsigned __int8 **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
                  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = i;
                  if ( v23 == v4 + 32 )
                    break;
                  v24 = *(_QWORD *)v23;
                  if ( *((unsigned __int8 **)v23 + 1) != v4 + 32 || *(unsigned __int8 **)(v24 + 8) != v23 )
                    __fastfail(3u);
                  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v24;
                  *(_QWORD *)(v24 + 8) = v4 + 32;
                  v13 = MiConfigureMemoryInsertion(v4 + 16, i, v23);
                  ExFreePoolWithTag(v23, 0);
                  v25 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
                  v15 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
                  if ( v25 != v15 )
                    ExFreePoolWithTag((PVOID)(v25 - 16), 0);
                  v11 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                  if ( v13 < 0 )
                    goto LABEL_59;
                }
                v12 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                goto LABEL_55;
              }
            }
          }
        }
        goto LABEL_58;
      }
LABEL_59:
      MiUnlockDynamicMemoryExclusive(
        (__int64)MiSystemPartition,
        *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48));
      v28 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
      if ( v28 )
        ExFreePoolWithTag((PVOID)(v28 - 16), 0);
      if ( !v11 )
        goto LABEL_64;
      v29 = (unsigned __int8 *)(v11 - 16);
      while ( 1 )
      {
        ExFreePoolWithTag(v29, 0);
LABEL_64:
        v29 = *(unsigned __int8 **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        if ( v29 == v4 + 32 )
          break;
        v30 = *(_QWORD *)v29;
        if ( *((unsigned __int8 **)v29 + 1) != v4 + 32 || *(unsigned __int8 **)(v30 + 8) != v29 )
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v30;
        *(_QWORD *)(v30 + 8) = v4 + 32;
      }
      if ( !*(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) )
      {
        if ( v15 )
          MiDereferencePageRuns(v15);
        if ( v13 >= 0 )
          IoUpdateDumpPhysicalRanges();
      }
      return (unsigned int)v13;
    }
    v16 = 0LL;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      v17 = (char *)MmPhysicalMemoryBlock + 24;
      do
      {
        v18 = *(v17 - 1);
        if ( *v17 )
        {
          if ( v7 >= v18 )
          {
            if ( v7 < *v17 + v18 )
              goto LABEL_23;
          }
          else if ( v9 > v18 )
          {
            goto LABEL_23;
          }
        }
        ++v16;
        v17 += 2;
      }
      while ( v16 < *(unsigned int *)MmPhysicalMemoryBlock );
    }
LABEL_55:
    v26 = MiPageTablesNeeded(48 * v7 - 0x58000000000LL, 48 * v9 - 0x58000000001LL, 0, 0);
    v27 = v26;
    if ( v26 && !(unsigned int)MiAcquireNonPagedResources(MiSystemPartition, v26) )
    {
      v15 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
LABEL_58:
      v13 = -1073741670;
      goto LABEL_59;
    }
    if ( !v12 )
    {
      if ( !(unsigned int)MiIncreaseCommitLimits((__int64)MiSystemPartition, v8, v8, *v4, 0LL) )
      {
        if ( v27 )
          MiReleaseNonPagedResources((__int64)MiSystemPartition, v27);
        v13 = -1073741523;
LABEL_73:
        v15 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        goto LABEL_59;
      }
      KeConfigureDynamicMemory(v7, v9 - 1, 1u);
    }
    MiMapNewPfns(v7, v9, v6);
    *a3 = v8 << 12;
    if ( !v12 )
    {
      MiPerformMemoryChange(v7, v8, (void **)v4 + 7, (__int64 *)v4 + 2, v6);
      MiComputeNodeMemory();
      _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFF780000002E8LL, v8);
      RtlInterlockedClearBitRunEx((__int64)&qword_1402FF6E0, v7 >> 9, ((v9 + 511) >> 9) - (v7 >> 9));
      if ( (v6 & 4) == 0 )
        MiEnableNewPfns(v7, v9);
      KePulseEvent(qword_1402FFE90, 0, 0);
      v11 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    }
    v13 = 0;
    goto LABEL_73;
  }
  MiUnlockDynamicMemoryExclusive(
    (__int64)MiSystemPartition,
    *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48));
  return (unsigned int)v13;
}
