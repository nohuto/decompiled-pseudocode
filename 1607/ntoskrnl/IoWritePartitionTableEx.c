/*
 * XREFs of IoWritePartitionTableEx @ 0x14062026C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoWritePartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX *DriveLayout)
{
  __int64 v2; // r8
  unsigned int v3; // r9d

  return PcWritePartitionTable(DeviceObject, DriveLayout, v2, v3);
}
