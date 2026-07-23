/*
 * XREFs of WheapEtwEnableCallback @ 0x14057F8D0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     WheapFreeErrorRecord @ 0x1402306B0 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140230F14 (WheapGenerateETWEvents.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1406BBF90 (WheapSqmWaitWorkerRoutine.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _DEVICE_OBJECT *DeviceExtension; // rbx
  __int64 v5; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-40h] BYREF

  LODWORD(WheapDispatchPtr.NextDevice) = ControlCode;
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
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\SQMClient\\Windows");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
      {
        ZwClose(KeyHandle);
        KeInitializeTimerEx(&WheapSqmWaitTimer, NotificationTimer);
        KeInitializeDpc(&WheapSqmWaitTimerDpc, (PKDEFERRED_ROUTINE)WheapSqmWaitDpcRoutine, 0LL);
        qword_1402FA9F8 = 0LL;
        WheapSqmWaitWorkQueueItem = 0LL;
        qword_1402FA9F0 = (__int64)WheapSqmWaitWorkerRoutine;
        WheapSqmWaitWorkerRoutine(0LL);
      }
    }
  }
}
