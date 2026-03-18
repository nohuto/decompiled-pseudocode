/*
 * XREFs of VerifierIoRegisterShutdownNotification @ 0x1406C0804
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
