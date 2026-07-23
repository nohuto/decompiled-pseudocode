/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x140548410
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PnpCreateDeviceEventEntry @ 0x140489C28 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  _DWORD *DeviceEventEntry; // rbx
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+60h] [rbp+8h] BYREF

  DeviceEventEntry = PnpCreateDeviceEventEntry(0xB8uLL);
  if ( !DeviceEventEntry )
    return -1073741801;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *((_QWORD *)DeviceEventEntry + 3) = &Event;
  DeviceEventEntry[30] = 1;
  *((_QWORD *)DeviceEventEntry + 16) = &v3;
  *(GUID *)(DeviceEventEntry + 26) = GUID_DEVICE_NOOP;
  DeviceEventEntry[35] = 80;
  result = PnpInsertEventInQueue((__int64)DeviceEventEntry);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
