/*
 * XREFs of VerifierIoSetPartitionInformation @ 0x140742050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoSetPartitionInformation(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG PartitionNumber,
        ULONG PartitionType)
{
  return pXdvIoSetPartitionInformation(DeviceObject, SectorSize, PartitionNumber, PartitionType);
}
