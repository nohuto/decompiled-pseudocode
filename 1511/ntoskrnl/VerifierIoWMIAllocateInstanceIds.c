/*
 * XREFs of VerifierIoWMIAllocateInstanceIds @ 0x1406C08A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoWMIAllocateInstanceIds(LPCGUID Guid, ULONG InstanceCount, ULONG *FirstInstanceId)
{
  return pXdvIoWMIAllocateInstanceIds(Guid, InstanceCount, FirstInstanceId);
}
