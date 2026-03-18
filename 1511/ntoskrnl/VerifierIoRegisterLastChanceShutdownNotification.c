/*
 * XREFs of VerifierIoRegisterLastChanceShutdownNotification @ 0x1406C07F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  return pXdvIoRegisterLastChanceShutdownNotification(DeviceObject);
}
