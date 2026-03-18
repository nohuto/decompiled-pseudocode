/*
 * XREFs of InitSafeBoot @ 0x1407F80B8
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 */

int __fastcall InitSafeBoot(char a1)
{
  int result; // eax
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  int Data; // [rsp+68h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+6Ch] [rbp-25h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-21h] BYREF
  ULONG Disposition; // [rsp+A0h] [rbp+Fh] BYREF
  _BYTE KeyValueInformation[48]; // [rsp+A8h] [rbp+17h] BYREF

  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSafeBoot;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"AlternateShell");
      memset(KeyValueInformation, 0, 0x2CuLL);
      if ( NtQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x2Cu,
             &ResultLength) < 0 )
        a1 = 0;
    }
    RtlInitUnicodeString(&DestinationString, L"Option");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    result = NtClose(KeyHandle);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OptionValue");
      NtSetValueKey(Handle, &DestinationString, 0, 4u, &InitSafeBootMode, 4u);
      if ( a1 == 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"UseAlternateShell");
        Data = 1;
        NtSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      }
      return NtClose(Handle);
    }
  }
  return result;
}
