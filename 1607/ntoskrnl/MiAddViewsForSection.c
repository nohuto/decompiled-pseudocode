/*
 * XREFs of MiAddViewsForSection @ 0x14002C210
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 *     MiCommitPagefileBackedSection @ 0x1404A6010 (MiCommitPagefileBackedSection.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 *     MiAddMappedPtes @ 0x140509080 (MiAddMappedPtes.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiReferenceActiveSubsection @ 0x14002CA00 (MiReferenceActiveSubsection.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAddViewsForSection(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  char v5; // bp
  ULONG_PTR v7; // rsi
  volatile signed __int32 *v8; // rbx
  BOOL v9; // r13d
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v11; // edx
  int v12; // ebp
  int active; // eax
  unsigned __int64 v14; // rax
  int PrototypePtes; // eax
  unsigned int v17; // r12d
  bool v18; // zf
  signed __int32 v19; // eax
  __int64 v20; // r14
  KIRQL v21; // r13
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  KIRQL v26; // al
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v34; // [rsp+88h] [rbp+20h] BYREF

  v3 = *a1;
  v4 = 0LL;
  v30 = *a1;
  v5 = a3;
  v7 = (ULONG_PTR)a1;
  v8 = (volatile signed __int32 *)(*a1 + 72);
  v9 = *(_QWORD *)(*a1 + 64) != 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 72, CurrentIrql);
  }
  else
  {
    v34 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v34 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 72, CurrentIrql);
    v11 = *v8;
    while ( (v11 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v11 & 0x40000000) == 0 )
      {
        v19 = _InterlockedCompareExchange(v8, v11 | 0x40000000, v11);
        v18 = v11 == v19;
        v11 = v19;
        if ( !v18 )
          continue;
      }
      KeYieldProcessorEx(&v34);
      v11 = *v8;
    }
  }
  v12 = v5 & 1;
  if ( v12 )
  {
    ++*(_QWORD *)(v3 + 40);
    ++*(_DWORD *)(v3 + 88);
  }
  while ( *(_QWORD *)(v7 + 8) )
  {
    if ( !v9 )
      goto LABEL_10;
    active = MiReferenceActiveSubsection(v7, a3, CurrentIrql);
    v29 = active;
    if ( active >= 0 )
      goto LABEL_10;
    if ( active != -1073741302 )
    {
      ExReleaseSpinLockExclusive(v8, CurrentIrql);
      v17 = v29;
      goto LABEL_33;
    }
LABEL_20:
    if ( !v7 )
    {
LABEL_12:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
      else
        *v8 = 0;
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  ExReleaseSpinLockExclusive(v8, CurrentIrql);
  if ( (a3 & 2) != 0 )
    return 3221225865LL;
  PrototypePtes = MiCreatePrototypePtes(v7);
  v17 = PrototypePtes;
  if ( PrototypePtes >= 0 )
  {
    CurrentIrql = ExAcquireSpinLockExclusive(v8);
LABEL_10:
    if ( a2 )
    {
      v14 = *(unsigned int *)(v7 + 44);
      if ( a2 <= v14 )
        goto LABEL_12;
      a2 -= v14;
    }
    v7 = *(_QWORD *)(v7 + 16);
    goto LABEL_20;
  }
  if ( PrototypePtes == -1073741302 )
  {
    CurrentIrql = ExAcquireSpinLockExclusive(v8);
    goto LABEL_20;
  }
  if ( !v9 )
    goto LABEL_39;
LABEL_33:
  v20 = (__int64)a1;
  v21 = ExAcquireSpinLockExclusive(v8);
  if ( a1 != (__int64 *)v7 )
  {
    do
    {
      v25 = MiDecrementSubsectionViewCount(v20, 1);
      if ( !*(_QWORD *)(v20 + 96) )
        v25 += MiInsertUnusedSubsection(v22, 0LL, v23, v24);
      v20 = *(_QWORD *)(v20 + 16);
      v4 += v25;
    }
    while ( v20 != v7 );
  }
  ExReleaseSpinLockExclusive(v8, v21);
  if ( v4 )
    MiReturnSubsectionCharges(v4);
LABEL_39:
  if ( v12 )
  {
    v26 = ExAcquireSpinLockExclusive(v8);
    --*(_QWORD *)(v30 + 40);
    --*(_DWORD *)(v30 + 88);
    MiCheckControlArea(v30, v26, v27, v28);
  }
  return v17;
}
