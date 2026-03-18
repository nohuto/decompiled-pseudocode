/*
 * XREFs of VerifierIoRegisterLastChanceShutdownNotification @ 0x140741FE8
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
