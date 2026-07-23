/*
 * XREFs of CmpRecordShutdownStopTime @ 0x1405FCC88
 * Callers:
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 */

NTSTATUS CmpRecordShutdownStopTime()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF
  LARGE_INTEGER Data; // [rsp+88h] [rbp+18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Data = KeQueryPerformanceCounter(0LL);
    RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounter");
    v1 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
    ZwClose(KeyHandle);
    return v1;
  }
  return result;
}
