/*
 * XREFs of WheapSqmCollectConfigurationDataPoints @ 0x14054A10C
 * Callers:
 *     WheapEtwEnableCallback @ 0x14054A064 (WheapEtwEnableCallback.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 */

NTSTATUS WheapSqmCollectConfigurationDataPoints()
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\SQMClient\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    KeInitializeTimerEx(&WheapSqmWaitTimer, NotificationTimer);
    KeInitializeDpc(&WheapSqmWaitTimerDpc, (PKDEFERRED_ROUTINE)WheapSqmWaitDpcRoutine, 0LL);
    qword_1402D5558 = 0LL;
    WheapSqmWaitWorkQueueItem = 0LL;
    qword_1402D5550 = (__int64)WheapSqmWaitWorkerRoutine;
    return WheapSqmWaitWorkerRoutine(0LL);
  }
  return result;
}
