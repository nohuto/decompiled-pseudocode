/*
 * XREFs of PnpSetPlugPlayEvent @ 0x1404EEE18
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PnpCompareGuid @ 0x1404E0E6C (PnpCompareGuid.c)
 *     PnpCreateDeviceEventEntry @ 0x1404E2358 (PnpCreateDeviceEventEntry.c)
 */

void __fastcall PnpSetPlugPlayEvent(__int128 *a1, _QWORD *a2)
{
  void *v2; // rsi
  __int64 v4; // rdi
  int v5; // r14d
  _DWORD *DeviceEventEntry; // rax
  __int64 v7; // rbx
  __int128 v8; // xmm0

  v2 = a2;
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    v4 = *(_QWORD *)(a2[39] + 40LL);
    if ( v4 )
    {
      v5 = *(unsigned __int16 *)(v4 + 40) + 80;
      DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(v4 + 40) + 184);
      v7 = (__int64)DeviceEventEntry;
      if ( DeviceEventEntry )
      {
        v8 = *a1;
        DeviceEventEntry[35] = v5;
        *(_OWORD *)(DeviceEventEntry + 26) = v8;
        if ( PnpCompareGuid(a1, &GUID_DEVICE_ENUMERATED) )
          *(_DWORD *)(v7 + 120) = 4;
        else
          *(_DWORD *)(v7 + 120) = 1;
        memmove((void *)(v7 + 152), *(const void **)(v4 + 48), *(unsigned __int16 *)(v4 + 40));
        *(_WORD *)(v7 + 2 * ((unsigned __int64)*(unsigned __int16 *)(v4 + 40) >> 1) + 152) = 0;
        if ( PnpCompareGuid(a1, &GUID_DEVICE_ENUMERATED) || PnpCompareGuid(a1, &GUID_DEVICE_ARRIVAL) )
          v2 = 0LL;
        else
          ObfReferenceObject(v2);
        *(_QWORD *)(v7 + 144) = v2;
        PnpInsertEventInQueue(v7);
      }
    }
  }
}
