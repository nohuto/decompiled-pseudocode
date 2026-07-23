/*
 * XREFs of MiDemoteLargeFreePage @ 0x140089980
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140064A70 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400899E0 (MiTryUnlinkNodeLargePage.c)
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
