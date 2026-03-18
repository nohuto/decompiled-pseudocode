/*
 * XREFs of VerifierIoReadPartitionTableEx @ 0x1406C07D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoReadPartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX **DriveLayout)
{
  return pXdvIoReadPartitionTableEx(DeviceObject, DriveLayout);
}
