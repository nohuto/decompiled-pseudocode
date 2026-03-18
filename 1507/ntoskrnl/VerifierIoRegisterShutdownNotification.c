/*
 * XREFs of VerifierIoRegisterShutdownNotification @ 0x140741FF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  return pXdvIoRegisterShutdownNotification(DeviceObject);
}
