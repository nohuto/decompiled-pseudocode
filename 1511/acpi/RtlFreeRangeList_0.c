/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C0024C80
 * Callers:
 *     ArbBootAllocation @ 0x1C006AEA0 (ArbBootAllocation.c)
 *     ArbTestAllocation @ 0x1C006B370 (ArbTestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C0073550 (ArbRollbackAllocation.c)
 *     ArbCommitAllocation @ 0x1C00810E0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C008110C (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00811A0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00814F0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C0081880 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C0081C60 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
