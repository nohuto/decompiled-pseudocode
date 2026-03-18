/*
 * XREFs of VerifierIoReadPartitionTableEx @ 0x140741FC8
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
