/*
 * XREFs of IoReadPartitionTableEx @ 0x140620118
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoReadPartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX **DriveLayout)
{
  return PcReadPartitionTable(DeviceObject, DriveLayout);
}
