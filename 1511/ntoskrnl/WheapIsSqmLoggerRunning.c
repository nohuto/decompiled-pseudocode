/*
 * XREFs of WheapIsSqmLoggerRunning @ 0x140679364
 * Callers:
 *     WheapSqmWaitWorkerRoutine @ 0x14067972C (WheapSqmWaitWorkerRoutine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
