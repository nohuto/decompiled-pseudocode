/*
 * XREFs of ZwClose_0 @ 0x1C0023628
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C00704B8 (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C0080AD8 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C0080CC4 (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwClose_0(HANDLE Handle)
{
  return ZwClose(Handle);
}
