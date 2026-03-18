/*
 * XREFs of RtlDeleteRange_0 @ 0x1C002BC7A
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C009DD00 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A2190 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00A2CC0 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
