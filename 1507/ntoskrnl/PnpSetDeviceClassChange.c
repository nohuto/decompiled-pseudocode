/*
 * XREFs of PnpSetDeviceClassChange @ 0x14045F3A4
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x140460BD4 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetDeviceClassChange(_OWORD *a1, _OWORD *a2, const void **a3)
{
  int v6; // edi
  __int64 DeviceEventEntry; // rax
  __int64 v8; // rbx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v6 = *(unsigned __int16 *)a3 + 80;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)a3 + 184);
  v8 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225495LL;
  *(_OWORD *)(DeviceEventEntry + 104) = *a1;
  *(_DWORD *)(DeviceEventEntry + 120) = 2;
  *(_DWORD *)(DeviceEventEntry + 140) = v6;
  *(_OWORD *)(DeviceEventEntry + 152) = *a2;
  memmove((void *)(DeviceEventEntry + 168), a3[1], *(unsigned __int16 *)a3);
  *(_WORD *)(v8 + 2 * ((unsigned __int64)*(unsigned __int16 *)a3 >> 1) + 168) = 0;
  return PnpInsertEventInQueue(v8);
}
