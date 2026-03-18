/*
 * XREFs of PnpSetDeviceRemovalSafe @ 0x14060E930
 * Callers:
 *     PnpProcessCompletedEject @ 0x140603BA0 (PnpProcessCompletedEject.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1404E2358 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetDeviceRemovalSafe(_QWORD *Object)
{
  __int64 v3; // rdi
  int v4; // ebp
  _DWORD *DeviceEventEntry; // rbx
  const void *v6; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v3 = *(_QWORD *)(Object[39] + 40LL);
  else
    v3 = 0LL;
  v4 = *(unsigned __int16 *)(v3 + 40) + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(v3 + 40) + 186);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObject(Object);
  *((_QWORD *)DeviceEventEntry + 3) = 0LL;
  *((_QWORD *)DeviceEventEntry + 2) = 0LL;
  *((_QWORD *)DeviceEventEntry + 6) = 0LL;
  *((_QWORD *)DeviceEventEntry + 7) = 0LL;
  DeviceEventEntry[30] = 1;
  *((_QWORD *)DeviceEventEntry + 16) = 0LL;
  *(GUID *)(DeviceEventEntry + 26) = GUID_DEVICE_SAFE_REMOVAL;
  DeviceEventEntry[34] = 0;
  DeviceEventEntry[35] = v4;
  *((_QWORD *)DeviceEventEntry + 18) = Object;
  v6 = *(const void **)(v3 + 48);
  if ( v6 )
    memmove(DeviceEventEntry + 38, v6, *(unsigned __int16 *)(v3 + 40));
  *((_WORD *)DeviceEventEntry + ((unsigned __int64)*(unsigned __int16 *)(v3 + 40) >> 1) + 76) = 0;
  return PnpInsertEventInQueue((__int64)DeviceEventEntry);
}
