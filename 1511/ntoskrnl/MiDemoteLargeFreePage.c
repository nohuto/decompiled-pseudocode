/*
 * XREFs of MiDemoteLargeFreePage @ 0x140019D40
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiTryUnlinkNodeLargePage @ 0x140019BFC (MiTryUnlinkNodeLargePage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140019D90 (MiInsertLargePageInFreeOrZeroList.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1)
{
  unsigned __int64 v1; // rbx
  int v2; // eax

  v1 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v2 = MiTryUnlinkNodeLargePage(a1 & 0xFFFFFFFFFFFFFE00uLL);
  if ( v2 > 1 )
    return 0LL;
  MiInsertLargePageInFreeOrZeroList(48 * v1 - 0x58000000000LL, (unsigned int)v2);
  return 1LL;
}
