/*
 * XREFs of MiDemoteLargeFreePage @ 0x1401591E0
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C65C0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiTryUnlinkNodeLargePage @ 0x140159228 (MiTryUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  if ( (int)MiTryUnlinkNodeLargePage(a1 & 0xFFFFFFFFFFFFFE00uLL) > 1 )
    return 0LL;
  MiInsertLargePageInFreeOrZeroList(48 * v1 - 0x58000000000LL);
  return 1LL;
}
