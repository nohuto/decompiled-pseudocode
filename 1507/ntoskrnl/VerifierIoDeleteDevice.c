/*
 * XREFs of VerifierIoDeleteDevice @ 0x140741F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  pXdvIoDeleteDevice(DeviceObject);
}
