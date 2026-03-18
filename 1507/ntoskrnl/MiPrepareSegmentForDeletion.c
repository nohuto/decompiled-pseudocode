/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x14008506C
 * Callers:
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRemoveUnusedSubsection @ 0x140082C00 (MiRemoveUnusedSubsection.c)
 *     MiDrainControlAreaWrites @ 0x140085020 (MiDrainControlAreaWrites.c)
 *     MiIncrementSubsectionViewCount @ 0x1400859A4 (MiIncrementSubsectionViewCount.c)
 *     MiBuildWakeList @ 0x140088660 (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPrepareSegmentForDeletion(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // esi
  signed __int32 v7; // eax
  __int64 v8; // rsi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
    while ( 1 )
    {
      v7 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  MiDrainControlAreaWrites(a1, CurrentIrql);
  MiRemoveUnusedSegment(a1);
  v8 = MiBuildWakeList(a1, 1LL);
  while ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a2);
    MiIncrementSubsectionViewCount(a2, 0LL);
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  return v8;
}
