/*
 * XREFs of MmZeroPageFileAtShutdown @ 0x1406A0668
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 */

_BOOL8 MmZeroPageFileAtShutdown()
{
  int v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  int v3; // [rsp+38h] [rbp-21h] BYREF
  const wchar_t *v4; // [rsp+40h] [rbp-19h]
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v9; // [rsp+94h] [rbp+3Bh]
  int v10; // [rsp+9Ch] [rbp+43h]

  v3 = 11141288;
  v4 = L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  *(_DWORD *)&ValueName.Length = 3145774;
  ValueName.Buffer = L"ClearPageFileAtShutdown";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v3;
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
