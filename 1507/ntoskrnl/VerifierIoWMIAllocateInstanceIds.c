/*
 * XREFs of VerifierIoWMIAllocateInstanceIds @ 0x140742098
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
