/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C002BC50
 * Callers:
 *     ArbBootAllocation @ 0x1C008B420 (ArbBootAllocation.c)
 *     ArbTestAllocation @ 0x1C008B950 (ArbTestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C0090BA0 (ArbRollbackAllocation.c)
 *     ArbCommitAllocation @ 0x1C00A2CE0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00A2D0C (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00A2DA0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00A30F0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A3480 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C00A3860 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
