/*
 * XREFs of VerifierIoStartNextPacket @ 0x1406C087C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  pXdvIoStartNextPacket(DeviceObject, Cancelable);
}
