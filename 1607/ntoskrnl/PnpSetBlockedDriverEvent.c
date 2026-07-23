/*
 * XREFs of PnpSetBlockedDriverEvent @ 0x140642DB4
 * Callers:
 *     PnpPrepareDriverLoading @ 0x140515AD8 (PnpPrepareDriverLoading.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x140489C28 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetBlockedDriverEvent(_OWORD *a1)
{
  _DWORD *DeviceEventEntry; // rax

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  DeviceEventEntry = PnpCreateDeviceEventEntry(0xB8uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  DeviceEventEntry[30] = 7;
  DeviceEventEntry[35] = 80;
  *(GUID *)(DeviceEventEntry + 26) = GUID_DRIVER_BLOCKED;
  *(_OWORD *)(DeviceEventEntry + 38) = *a1;
  return PnpInsertEventInQueue((__int64)DeviceEventEntry);
}
