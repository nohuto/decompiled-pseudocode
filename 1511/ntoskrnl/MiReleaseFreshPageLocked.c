/*
 * XREFs of MiReleaseFreshPageLocked @ 0x140007B44
 * Callers:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReleaseFreshPageLocked(__int64 a1)
{
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= 0xCFu;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  return MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48);
}
