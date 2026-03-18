/*
 * XREFs of PopCheckForUpgradeInProgress @ 0x1407660D4
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     PopLogSleepDisabled @ 0x14053D3AC (PopLogSleepDisabled.c)
 */

NTSTATUS PopCheckForUpgradeInProgress()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp+37h] BYREF
  int v7; // [rsp+84h] [rbp+3Bh]
  int v8; // [rsp+88h] [rbp+3Fh]
  int v9; // [rsp+8Ch] [rbp+43h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 && v9 == 1 && v7 == 4 && v8 == 4 )
      return PopLogSleepDisabled(15, 8, 0LL, 0LL);
  }
  return result;
}
