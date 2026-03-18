/*
 * XREFs of VerifierIoReadPartitionTable @ 0x1406C07CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoReadPartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        BOOLEAN ReturnRecognizedPartitions,
        struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer)
{
  return pXdvIoReadPartitionTable(DeviceObject, SectorSize, ReturnRecognizedPartitions, PartitionBuffer);
}
