/*
 * XREFs of sub_14000787C @ 0x14000787C
 * Callers:
 *     sub_1400064F8 @ 0x1400064F8 (sub_1400064F8.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

bool sub_14000787C()
{
  ULONG ResultLength; // [rsp+30h] [rbp-248h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-240h] BYREF
  _BYTE KeyValueInformation[528]; // [rsp+50h] [rbp-228h] BYREF

  *(_DWORD *)&ValueName.Length = 2359330;
  ResultLength = 528;
  ValueName.Buffer = L"DedicatedDumpFile";
  return NtQueryValueKey(Handle, &ValueName, KeyValueBasicInformation, KeyValueInformation, 0x210u, &ResultLength) >= 0;
}
