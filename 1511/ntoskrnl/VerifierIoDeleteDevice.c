/*
 * XREFs of VerifierIoDeleteDevice @ 0x1406C072C
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
