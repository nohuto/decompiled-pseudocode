/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x1404C67B4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1404E2358 (PnpCreateDeviceEventEntry.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  __int64 DeviceEventEntry; // rbx
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+60h] [rbp+8h] BYREF

  DeviceEventEntry = PnpCreateDeviceEventEntry(0xB8uLL);
  if ( !DeviceEventEntry )
    return -1073741801;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(DeviceEventEntry + 24) = &Event;
  *(_DWORD *)(DeviceEventEntry + 120) = 1;
  *(_QWORD *)(DeviceEventEntry + 128) = &v3;
  *(GUID *)(DeviceEventEntry + 104) = GUID_DEVICE_NOOP;
  *(_DWORD *)(DeviceEventEntry + 140) = 80;
  result = PnpInsertEventInQueue(DeviceEventEntry);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
