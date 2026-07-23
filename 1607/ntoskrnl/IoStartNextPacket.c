/*
 * XREFs of IoStartNextPacket @ 0x1400AC940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, (Cancelable != 0 ? 0x80 : 0) | 0x20u);
  else
    IopStartNextPacket(DeviceObject, Cancelable);
}
