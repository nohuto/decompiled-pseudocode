/*
 * XREFs of VerifierIoUnregisterShutdownNotification @ 0x1406C0894
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoUnregisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  pXdvIoUnregisterShutdownNotification(DeviceObject);
}
