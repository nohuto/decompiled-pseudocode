/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C0023610
 * Callers:
 *     ArbBootAllocation @ 0x1C006D240 (ArbBootAllocation.c)
 *     ArbTestAllocation @ 0x1C006D710 (ArbTestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C00734C0 (ArbRollbackAllocation.c)
 *     ArbCommitAllocation @ 0x1C0080F00 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C0080F2C (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C0080FC0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C0081310 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00816A0 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C0081A80 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
