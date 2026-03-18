/*
 * XREFs of IoVerifyPartitionTable @ 0x1406200CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoVerifyPartitionTable(PDEVICE_OBJECT DeviceObject, BOOLEAN FixErrors)
{
  __int64 v2; // r8
  unsigned int v3; // r9d

  return PcVerifyPartitionTable(DeviceObject, FixErrors, v2, v3);
}
