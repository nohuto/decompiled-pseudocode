/*
 * XREFs of IoSetPartitionInformationEx @ 0x1406200C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoSetPartitionInformationEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG PartitionNumber,
        struct _SET_PARTITION_INFORMATION_EX *PartitionInfo)
{
  unsigned int v3; // r9d

  return PcSetPartition(DeviceObject, PartitionNumber, PartitionInfo, v3);
}
