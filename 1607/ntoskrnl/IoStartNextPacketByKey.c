/*
 * XREFs of IoStartNextPacketByKey @ 0x1401C9164
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx((__int64)DeviceObject, Key, (Cancelable != 0 ? 0x80 : 0) | 0x40);
  else
    IopStartNextPacketByKey(DeviceObject, Cancelable, Key);
}
