/*
 * XREFs of VerifierIoUnregisterShutdownNotification @ 0x140742088
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
