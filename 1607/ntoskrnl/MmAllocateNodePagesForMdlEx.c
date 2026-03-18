/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x1400AA474
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1400AA410 (MmAllocatePagesForMdlEx.c)
 *     HvlpDepositPages @ 0x1401BB624 (HvlpDepositPages.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400AA4A4 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
