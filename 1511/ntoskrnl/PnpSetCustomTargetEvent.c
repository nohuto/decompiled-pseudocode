/*
 * XREFs of PnpSetCustomTargetEvent @ 0x1404E221C
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140102528 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoReportTargetDeviceChange @ 0x1404EABBC (IoReportTargetDeviceChange.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x140601D10 (PnpReportTargetDeviceChangeAsyncWorker.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1404E2358 (PnpCreateDeviceEventEntry.c)
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
  __int64 DeviceEventEntry; // rbx
  const void *v12; // rdx
  void *v13; // rcx

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
  *(_QWORD *)(DeviceEventEntry + 32) = a4;
  *(_QWORD *)(DeviceEventEntry + 40) = a5;
  *(_QWORD *)(DeviceEventEntry + 24) = a2;
  *(_DWORD *)(DeviceEventEntry + 136) = 0;
  *(_DWORD *)(DeviceEventEntry + 120) = 3;
  *(GUID *)(DeviceEventEntry + 104) = GUID_PNP_CUSTOM_NOTIFICATION;
  *(_QWORD *)(DeviceEventEntry + 128) = a3;
  *(_DWORD *)(DeviceEventEntry + 140) = v10;
  *(_QWORD *)(DeviceEventEntry + 144) = Object;
  v12 = *(const void **)(v9 + 48);
  if ( v12 )
    memmove((void *)(DeviceEventEntry + 160), v12, *(unsigned __int16 *)(v9 + 40));
  v13 = (void *)(DeviceEventEntry + v10 + 104 - (unsigned __int64)Src[1]);
  *(_QWORD *)(DeviceEventEntry + 152) = v13;
  memmove(v13, Src, Src[1]);
  return PnpInsertEventInQueue(DeviceEventEntry);
}
