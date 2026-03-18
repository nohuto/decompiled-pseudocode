/*
 * XREFs of PnpSetCustomTargetEvent @ 0x140461C58
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140026540 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoReportTargetDeviceChange @ 0x14055F648 (IoReportTargetDeviceChange.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x14067CBB8 (PnpReportTargetDeviceChangeAsyncWorker.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x140460BD4 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetCustomTargetEvent(
        _QWORD *Object,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *Src)
{
  __int64 v9; // rdi
  unsigned int v10; // ebp
  _DWORD *DeviceEventEntry; // rbx
  const void *v12; // rdx
  char *v13; // rcx

  if ( a2 )
    *a3 = 259;
  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v9 = *(_QWORD *)(Object[39] + 40LL);
  else
    v9 = 0LL;
  v10 = Src[1] + ((*(unsigned __int16 *)(v9 + 40) + 89) & 0xFFFFFFF8);
  DeviceEventEntry = PnpCreateDeviceEventEntry(v10 + 104);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObject(Object);
  *((_QWORD *)DeviceEventEntry + 4) = a4;
  *((_QWORD *)DeviceEventEntry + 5) = a5;
  *((_QWORD *)DeviceEventEntry + 3) = a2;
  DeviceEventEntry[34] = 0;
  DeviceEventEntry[30] = 3;
  *(GUID *)(DeviceEventEntry + 26) = GUID_PNP_CUSTOM_NOTIFICATION;
  *((_QWORD *)DeviceEventEntry + 16) = a3;
  DeviceEventEntry[35] = v10;
  *((_QWORD *)DeviceEventEntry + 18) = Object;
  v12 = *(const void **)(v9 + 48);
  if ( v12 )
    memmove(DeviceEventEntry + 40, v12, *(unsigned __int16 *)(v9 + 40));
  v13 = (char *)DeviceEventEntry + v10 + 104 - (unsigned __int64)Src[1];
  *((_QWORD *)DeviceEventEntry + 19) = v13;
  memmove(v13, Src, Src[1]);
  return PnpInsertEventInQueue((__int64)DeviceEventEntry);
}
