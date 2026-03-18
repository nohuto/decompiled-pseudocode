/*
 * XREFs of ZwClose_0 @ 0x1C0024C98
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C006E118 (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C0080CB8 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C0080EA4 (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwClose_0(HANDLE Handle)
{
  return ZwClose(Handle);
}
