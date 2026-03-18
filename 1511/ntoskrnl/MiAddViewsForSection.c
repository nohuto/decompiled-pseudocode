/*
 * XREFs of MiAddViewsForSection @ 0x140062470
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     MiAddMappedPtes @ 0x1403C7E10 (MiAddMappedPtes.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MiCommitPagefileBackedSection @ 0x14049C528 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiReferenceActiveSubsection @ 0x1400A8C00 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAddViewsForSection(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  char v5; // r15
  __int64 *v7; // rdi
  volatile signed __int32 *v8; // rbx
  BOOL v9; // r13d
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v11; // edx
  int v12; // r15d
  int v13; // ebp
  int active; // eax
  unsigned int v15; // ebp
  unsigned __int64 v16; // rax
  int PrototypePtes; // eax
  bool v19; // zf
  signed __int32 v20; // eax
  __int64 *v21; // r14
  KIRQL i; // r13
  __int64 v23; // r12
  KIRQL v24; // al
  __int64 v25; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v28; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v29; // [rsp+88h] [rbp+20h]

  v3 = *a1;
  v4 = 0LL;
  v25 = *a1;
  v5 = a3;
  v7 = a1;
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
    v28 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v28 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v3 + 72), CurrentIrql, a3);
    v11 = *v8;
    while ( (v11 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v11 & 0x40000000) == 0 )
      {
        v20 = _InterlockedCompareExchange(v8, v11 | 0x40000000, v11);
        v19 = v11 == v20;
        v11 = v20;
        if ( !v19 )
          continue;
      }
      KeYieldProcessorEx(&v28);
      v11 = *v8;
    }
  }
  v12 = v5 & 1;
  if ( v12 )
  {
    ++*(_QWORD *)(v3 + 40);
    ++*(_DWORD *)(v3 + 88);
  }
  while ( 1 )
  {
    v13 = *((_DWORD *)v7 + 13) & 0x7FFFFFFF;
    v29 = *((_DWORD *)v7 + 11);
    if ( !v7[1] )
      break;
    if ( !v9 )
      goto LABEL_10;
    active = MiReferenceActiveSubsection(v7, CurrentIrql);
    v15 = active;
    if ( active >= 0 )
      goto LABEL_10;
    if ( active != -1073741302 )
    {
      ExReleaseSpinLockExclusive(v8, CurrentIrql);
      goto LABEL_33;
    }
LABEL_19:
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
  PrototypePtes = MiCreatePrototypePtes(v7, v29, v29 + v13);
  v15 = PrototypePtes;
  if ( PrototypePtes >= 0 )
  {
    CurrentIrql = ExAcquireSpinLockExclusive(v8);
LABEL_10:
    if ( a2 )
    {
      v16 = *((unsigned int *)v7 + 11);
      if ( a2 <= v16 )
        goto LABEL_12;
      a2 -= v16;
    }
    v7 = (__int64 *)v7[2];
    goto LABEL_19;
  }
  if ( PrototypePtes == -1073741302 )
  {
    CurrentIrql = ExAcquireSpinLockExclusive(v8);
    goto LABEL_19;
  }
  if ( !v9 )
    goto LABEL_39;
LABEL_33:
  v21 = a1;
  for ( i = ExAcquireSpinLockExclusive(v8); v21 != v7; v4 += v23 )
  {
    v23 = MiDecrementSubsectionViewCount(v21, 1LL);
    if ( !v21[12] )
      v23 += MiInsertUnusedSubsection(v21, 0LL);
    v21 = (__int64 *)v21[2];
  }
  ExReleaseSpinLockExclusive(v8, i);
  if ( v4 )
    MiReturnSubsectionCharges(v4);
LABEL_39:
  if ( v12 )
  {
    v24 = ExAcquireSpinLockExclusive(v8);
    --*(_QWORD *)(v25 + 40);
    --*(_DWORD *)(v25 + 88);
    MiCheckControlArea(v25, v24);
  }
  return v15;
}
