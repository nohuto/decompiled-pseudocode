/*
 * XREFs of RtlAddRange_0 @ 0x1C0024C8C
 * Callers:
 *     ArbAddAllocation @ 0x1C0080C70 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C0080CB8 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C0080EA4 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x1C00811A0 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlAddRange_0(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        UCHAR Attributes,
        ULONG Flags,
        PVOID UserData,
        PVOID Owner)
{
  return RtlAddRange(RangeList, Start, End, Attributes, Flags, UserData, Owner);
}
