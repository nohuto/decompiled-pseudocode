/*
 * XREFs of PopConfigureHeteroPolicies @ 0x14056A738
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14056A584 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 */

int __fastcall PopConfigureHeteroPolicies(int a1)
{
  int result; // eax
  wchar_t **v2; // rbx
  __int64 v3; // rdi
  HANDLE Handle; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  UNICODE_STRING ValueName; // [rsp+88h] [rbp+2Fh] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+98h] [rbp+3Fh] BYREF

  if ( a1 == 3 )
  {
    KiDefaultDynamicHeteroCpuPolicy = 4;
    KiDynamicHeteroCpuPolicyImportantShort = 4;
  }
  else
  {
    KiDefaultDynamicHeteroCpuPolicy = 3;
    KiDynamicHeteroCpuPolicyImportantShort = 3;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v2 = &off_1406EB0A8;
    ObjectAttributes.RootDirectory = KeyHandle;
    v3 = 7LL;
    do
    {
      RtlInitUnicodeString(&DestinationString, *(v2 - 1));
      if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, *v2);
        if ( ZwQueryValueKey(
               Handle,
               &ValueName,
               KeyValuePartialInformationAlign64,
               KeyValueInformation,
               0x10u,
               &ResultLength) >= 0
          && KeyValueInformation[0] == 4 )
        {
          *(_DWORD *)v2[1] = KeyValueInformation[2];
        }
        ZwClose(Handle);
      }
      v2 += 3;
      --v3;
    }
    while ( v3 );
    return ZwClose(KeyHandle);
  }
  return result;
}
