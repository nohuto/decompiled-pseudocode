/*
 * XREFs of VerifierIoWritePartitionTable @ 0x1406C08AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoWritePartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG SectorsPerTrack,
        ULONG NumberOfHeads,
        struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer)
{
  return pXdvIoWritePartitionTable(DeviceObject, SectorSize, SectorsPerTrack, NumberOfHeads, PartitionBuffer);
}
