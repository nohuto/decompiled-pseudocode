/*
 * XREFs of VerifierIoStartNextPacket @ 0x140742070
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
