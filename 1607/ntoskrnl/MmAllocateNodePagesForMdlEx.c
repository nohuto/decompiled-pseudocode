/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x1400A89F4
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1400A8990 (MmAllocatePagesForMdlEx.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400A8A24 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
