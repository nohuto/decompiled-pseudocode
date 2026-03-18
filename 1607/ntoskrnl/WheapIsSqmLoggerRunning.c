/*
 * XREFs of WheapIsSqmLoggerRunning @ 0x1406BBA94
 * Callers:
 *     WheapSqmWaitWorkerRoutine @ 0x1406BBE58 (WheapSqmWaitWorkerRoutine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char WheapIsSqmLoggerRunning()
{
  int v0; // esi
  char v1; // bl
  _DWORD *PoolWithTag; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF

  v0 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\SQMClient\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v1 = 1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    return 0;
  RtlInitUnicodeString(&ValueName, L"SqmLoggerRunning");
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x61656857u);
  if ( PoolWithTag )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, 0x10u, &ResultLength) >= 0
      && ResultLength == 16 )
    {
      v0 = PoolWithTag[3];
    }
    ExFreePoolWithTag(PoolWithTag, 0x61656857u);
  }
  ZwClose(KeyHandle);
  if ( !v0 )
    return 0;
  return v1;
}
