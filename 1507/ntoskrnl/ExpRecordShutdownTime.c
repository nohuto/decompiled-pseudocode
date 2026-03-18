/*
 * XREFs of ExpRecordShutdownTime @ 0x140262720
 * Callers:
 *     ExShutdownSystem @ 0x1404040B8 (ExShutdownSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x140180B30 (ZwFlushKey.c)
 */

int ExpRecordShutdownTime()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF
  __int64 Data; // [rsp+98h] [rbp+18h] BYREF

  Data = MEMORY[0xFFFFF78000000014];
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"ShutdownTime");
    ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, &Data, 8u);
    ZwFlushKey(KeyHandle);
    return ZwClose(KeyHandle);
  }
  return result;
}
