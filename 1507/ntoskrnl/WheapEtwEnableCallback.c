/*
 * XREFs of WheapEtwEnableCallback @ 0x1405C161C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     WheapFreeErrorRecord @ 0x140266D5C (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x14026763C (WheapGenerateETWEvents.c)
 *     WheapSqmCollectConfigurationDataPoints @ 0x1405C16C4 (WheapSqmCollectConfigurationDataPoints.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _DEVICE_OBJECT *DeviceExtension; // rbx
  __int64 v5; // rax

  LODWORD(WheapDispatchPtr.DriverObject) = ControlCode;
  LODWORD(WheapDispatchPtr.Queue.ListEntry.Flink) = ControlCode;
  if ( ControlCode == 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDispatchPtr.CurrentIrp, Executive, 0, 0, 0LL);
      DeviceExtension = (struct _DEVICE_OBJECT *)WheapDispatchPtr.DeviceExtension;
      v5 = *(_QWORD *)WheapDispatchPtr.DeviceExtension;
      if ( *((struct _DEVICE_OBJECT **)WheapDispatchPtr.DeviceExtension + 1) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceExtension
        || *(PVOID *)(v5 + 8) != WheapDispatchPtr.DeviceExtension )
      {
        __fastfail(3u);
      }
      WheapDispatchPtr.DeviceExtension = *(PVOID *)WheapDispatchPtr.DeviceExtension;
      *(_QWORD *)(v5 + 8) = &WheapDispatchPtr.DeviceExtension;
      KeSetEvent((PRKEVENT)&WheapDispatchPtr.CurrentIrp, 0, 0);
      if ( DeviceExtension == (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceExtension )
        break;
      WheapGenerateETWEvents((__int64)&DeviceExtension->Timer);
      WheapFreeErrorRecord((__int64)DeviceExtension);
    }
    if ( !_InterlockedCompareExchange(&WheapSqmWaitQueued, 1, 0) )
      WheapSqmCollectConfigurationDataPoints();
  }
}
