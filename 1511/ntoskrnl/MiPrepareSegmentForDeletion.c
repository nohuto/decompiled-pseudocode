/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x14000C4EC
 * Callers:
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDrainControlAreaWrites @ 0x14000C580 (MiDrainControlAreaWrites.c)
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     MiBuildWakeList @ 0x14003AAEC (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x14003AB30 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiPrepareSegmentForDeletion(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rsi
  __int64 v5; // rdx
  KIRQL v6; // bp
  __int64 v7; // rbx

  v2 = (volatile LONG *)(a1 + 72);
  LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = v5;
  MiDrainControlAreaWrites(a1, v5);
  MiRemoveUnusedSegment(a1);
  v7 = MiBuildWakeList(a1, 1LL);
  while ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a2);
    MiIncrementSubsectionViewCount(a2, 0LL);
    a2 = *(_QWORD *)(a2 + 16);
  }
  ExReleaseSpinLockExclusive(v2, v6);
  return v7;
}
