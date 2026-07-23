/*
 * XREFs of PnpSetPlugPlayEvent @ 0x14048A464
 * Callers:
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x140489C28 (PnpCreateDeviceEventEntry.c)
 *     PnpCompareGuid @ 0x14048A570 (PnpCompareGuid.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 */

void __fastcall PnpSetPlugPlayEvent(__int128 *a1, _QWORD *a2)
{
  void *v2; // rsi
  __int64 v4; // rdi
  int v5; // r14d
  _DWORD *DeviceEventEntry; // rax
  _DWORD *v7; // rbx
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
        DeviceEventEntry[35] = v5;
        *(_OWORD *)(DeviceEventEntry + 26) = v8;
        if ( (unsigned __int8)PnpCompareGuid(a1, &GUID_DEVICE_ENUMERATED) )
          v7[30] = 4;
        else
          v7[30] = 1;
        memmove(v7 + 38, *(const void **)(v4 + 48), *(unsigned __int16 *)(v4 + 40));
        *((_WORD *)v7 + ((unsigned __int64)*(unsigned __int16 *)(v4 + 40) >> 1) + 76) = 0;
        if ( (unsigned __int8)PnpCompareGuid(a1, &GUID_DEVICE_ENUMERATED)
          || (unsigned __int8)PnpCompareGuid(a1, &GUID_DEVICE_ARRIVAL) )
        {
          v2 = 0LL;
        }
        else
        {
          ObfReferenceObject(v2);
        }
        *((_QWORD *)v7 + 18) = v2;
        PnpInsertEventInQueue(v7);
      }
    }
  }
}
