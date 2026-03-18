/*
 * XREFs of PnpSetPlugPlayEvent @ 0x140460814
 * Callers:
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PnpCompareGuid @ 0x140460920 (PnpCompareGuid.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x140460BD4 (PnpCreateDeviceEventEntry.c)
 */

void __fastcall PnpSetPlugPlayEvent(__int128 *a1, _QWORD *a2)
{
  void *v2; // rsi
  __int64 v4; // rdi
  int v5; // r14d
  __int64 DeviceEventEntry; // rax
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
      v7 = DeviceEventEntry;
      if ( DeviceEventEntry )
      {
        v8 = *a1;
        *(_DWORD *)(DeviceEventEntry + 140) = v5;
        *(_OWORD *)(DeviceEventEntry + 104) = v8;
        if ( (unsigned __int8)PnpCompareGuid(a1, &GUID_DEVICE_ENUMERATED) )
          *(_DWORD *)(v7 + 120) = 4;
        else
          *(_DWORD *)(v7 + 120) = 1;
        memmove((void *)(v7 + 152), *(const void **)(v4 + 48), *(unsigned __int16 *)(v4 + 40));
        *(_WORD *)(v7 + 2 * ((unsigned __int64)*(unsigned __int16 *)(v4 + 40) >> 1) + 152) = 0;
        if ( (unsigned __int8)PnpCompareGuid(a1, &GUID_DEVICE_ENUMERATED)
          || (unsigned __int8)PnpCompareGuid(a1, &GUID_DEVICE_ARRIVAL) )
        {
          v2 = 0LL;
        }
        else
        {
          ObfReferenceObject(v2);
        }
        *(_QWORD *)(v7 + 144) = v2;
        PnpInsertEventInQueue(v7);
      }
    }
  }
}
