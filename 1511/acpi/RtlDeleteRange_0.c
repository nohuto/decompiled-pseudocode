/*
 * XREFs of RtlDeleteRange_0 @ 0x1C0024CAA
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C007C8F0 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C0080750 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00810C0 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
