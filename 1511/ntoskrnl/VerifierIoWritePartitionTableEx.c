/*
 * XREFs of VerifierIoWritePartitionTableEx @ 0x1406C08B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoWritePartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX *DriveLayout)
{
  return pXdvIoWritePartitionTableEx(DeviceObject, DriveLayout);
}
