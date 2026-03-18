/*
 * XREFs of MiDemoteLargeFreePage @ 0x14008A280
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x1401063DC (MiClaimPhysicalRun.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140064EF0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiTryUnlinkNodeLargePage @ 0x14008A2E0 (MiTryUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, int a2)
{
  __int64 v3; // rbx

  v3 = a1 & ~(MiLargePageSizes[a2] - 1);
  if ( (int)MiTryUnlinkNodeLargePage(v3) > 1 )
    return 0LL;
  MiInsertLargePageInFreeOrZeroList(48 * v3 - 0x58000000000LL, a2, 0);
  return 1LL;
}
