/*
 * XREFs of PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140085FF0
 * Callers:
 *     PnpSetDeviceInstanceStartedEvent @ 0x140085FE4 (PnpSetDeviceInstanceStartedEvent.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x140489C28 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEventFromDeviceInstance(unsigned __int16 *a1)
{
  int v2; // esi
  __int64 DeviceEventEntry; // rax
  __int64 v4; // rbx
  const void *v5; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v2 = *a1 + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*a1 + 186);
  v4 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 16) = 0;
  *(_QWORD *)(DeviceEventEntry + 48) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 56) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 120) = 11;
  *(_QWORD *)(DeviceEventEntry + 128) = 0LL;
  *(GUID *)(DeviceEventEntry + 104) = GUID_DEVICE_ARRIVAL;
  *(_DWORD *)(DeviceEventEntry + 136) = 0;
  *(_DWORD *)(DeviceEventEntry + 140) = v2;
  *(_QWORD *)(DeviceEventEntry + 144) = 0LL;
  v5 = (const void *)*((_QWORD *)a1 + 1);
  if ( v5 )
    memmove((void *)(DeviceEventEntry + 152), v5, *a1);
  *(_WORD *)(v4 + 2 * ((unsigned __int64)*a1 >> 1) + 152) = 0;
  return PnpInsertEventInQueue(v4);
}
