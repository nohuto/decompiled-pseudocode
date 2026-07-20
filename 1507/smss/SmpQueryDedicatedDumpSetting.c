/*
 * XREFs of SmpQueryDedicatedDumpSetting @ 0x1400097DC
 * Callers:
 *     SmpPagefileInitialize @ 0x140008580 (SmpPagefileInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

bool SmpQueryDedicatedDumpSetting()
{
  ULONG ResultLength; // [rsp+30h] [rbp-248h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-240h] BYREF
  _BYTE KeyValueInformation[528]; // [rsp+50h] [rbp-228h] BYREF

  *(_DWORD *)&ValueName.Length = 2359330;
  ResultLength = 528;
  ValueName.Buffer = L"DedicatedDumpFile";
  return NtQueryValueKey(
           SmpCrashDumpKey,
           &ValueName,
           KeyValueBasicInformation,
           KeyValueInformation,
           0x210u,
           &ResultLength) >= 0;
}
