/*
 * XREFs of WheapSqmCollectConfigurationDataPoints @ 0x1405C16C4
 * Callers:
 *     WheapEtwEnableCallback @ 0x1405C161C (WheapEtwEnableCallback.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
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
    qword_140324698 = 0LL;
    WheapSqmWaitWorkQueueItem = 0LL;
    qword_140324690 = (__int64)WheapSqmWaitWorkerRoutine;
    return WheapSqmWaitWorkerRoutine(0LL);
  }
  return result;
}
