/*
 * XREFs of ZwOpenKey_0 @ 0x1C002BC92
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C008868C (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A28B8 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A2AA4 (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
