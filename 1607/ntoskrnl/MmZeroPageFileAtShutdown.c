/*
 * XREFs of MmZeroPageFileAtShutdown @ 0x1406575D8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

_BOOL8 MmZeroPageFileAtShutdown()
{
  int v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  int v4; // [rsp+40h] [rbp-19h] BYREF
  const wchar_t *v5; // [rsp+48h] [rbp-11h]
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v9; // [rsp+94h] [rbp+3Bh]
  int v10; // [rsp+9Ch] [rbp+43h]

  v4 = 11141288;
  v5 = L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  *(_DWORD *)&ValueName.Length = 3145774;
  ValueName.Buffer = L"ClearPageFileAtShutdown";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v4;
  v0 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
    && v9 == 4 )
  {
    v0 = v10;
  }
  ObCloseHandle(KeyHandle, 0);
  return v0 != 0;
}
