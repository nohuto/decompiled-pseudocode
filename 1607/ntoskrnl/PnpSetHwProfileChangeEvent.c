/*
 * XREFs of PnpSetHwProfileChangeEvent @ 0x140642F18
 * Callers:
 *     PnpRequestHwProfileChangeNotification @ 0x14062BE58 (PnpRequestHwProfileChangeNotification.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x140489C28 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetHwProfileChangeEvent(__int128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *DeviceEventEntry; // rax
  __int128 v11; // xmm0

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  DeviceEventEntry = PnpCreateDeviceEventEntry(0xB8uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  DeviceEventEntry[30] = 0;
  *((_QWORD *)DeviceEventEntry + 3) = a2;
  *((_QWORD *)DeviceEventEntry + 6) = a4;
  *((_QWORD *)DeviceEventEntry + 7) = a5;
  v11 = *a1;
  DeviceEventEntry[35] = 80;
  *((_QWORD *)DeviceEventEntry + 16) = a3;
  *(_OWORD *)(DeviceEventEntry + 26) = v11;
  return PnpInsertEventInQueue((__int64)DeviceEventEntry);
}
