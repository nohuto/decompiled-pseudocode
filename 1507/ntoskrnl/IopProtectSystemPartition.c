/*
 * XREFs of IopProtectSystemPartition @ 0x1407E7F0C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     NtOpenKey @ 0x1404F5530 (NtOpenKey.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 */

char __fastcall IopProtectSystemPartition(__int64 a1)
{
  HANDLE KeyHandle; // [rsp+30h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+80h] [rbp-19h] BYREF
  _BYTE KeyValueInformation[80]; // [rsp+90h] [rbp-9h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"Protect System Partition");
    if ( NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && KeyValueInformation[12] )
    {
      IopApplySystemPartitionProt(a1);
    }
    NtClose(KeyHandle);
  }
  return 1;
}
