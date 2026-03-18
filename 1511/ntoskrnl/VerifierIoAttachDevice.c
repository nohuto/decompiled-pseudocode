/*
 * XREFs of VerifierIoAttachDevice @ 0x1406C06CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoAttachDevice(
        PDEVICE_OBJECT SourceDevice,
        PUNICODE_STRING TargetDevice,
        PDEVICE_OBJECT *AttachedDevice)
{
  return pXdvIoAttachDevice(SourceDevice, TargetDevice, AttachedDevice);
}
