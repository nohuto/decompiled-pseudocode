/*
 * XREFs of RtlDeleteRange_0 @ 0x1C002363A
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C007C710 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C0080570 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C0080EE0 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
