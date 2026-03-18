/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x140090154
 * Callers:
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x140026D14 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140026D70 (MiBuildWakeList.c)
 *     MiIncrementSubsectionViewCount @ 0x14002CF20 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiDrainControlAreaWrites @ 0x1400901EC (MiDrainControlAreaWrites.c)
 *     MiRemoveUnusedSubsection @ 0x1400904A4 (MiRemoveUnusedSubsection.c)
 */

__int64 *__fastcall MiPrepareSegmentForDeletion(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rsi
  __int64 v5; // rdx
  unsigned __int8 v6; // bp
  __int64 *v7; // rbx

  v2 = (volatile LONG *)(a1 + 72);
  LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = v5;
  MiDrainControlAreaWrites(a1, v5);
  MiRemoveUnusedSegment(a1);
  v7 = MiBuildWakeList(a1, 1);
  while ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a2);
    MiIncrementSubsectionViewCount(a2, 0LL);
    a2 = *(_QWORD *)(a2 + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v6);
  return v7;
}
