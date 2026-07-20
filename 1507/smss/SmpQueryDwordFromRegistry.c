/*
 * XREFs of SmpQueryDwordFromRegistry @ 0x140009748
 * Callers:
 *     SmpQueryFilterPagesDumpSetting @ 0x1400096B0 (SmpQueryFilterPagesDumpSetting.c)
 *     SmpQueryCrashDumpType @ 0x140009700 (SmpQueryCrashDumpType.c)
 *     SmpGetCrashParameters @ 0x140010850 (SmpGetCrashParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpQueryDwordFromRegistry(__int64 a1, struct _UNICODE_STRING *a2, int a3, _DWORD *a4)
{
  ULONG ResultLength[4]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-228h] BYREF
  int v9; // [rsp+44h] [rbp-224h]
  int v10; // [rsp+4Ch] [rbp-21Ch]

  ResultLength[0] = 528;
  if ( NtQueryValueKey(SmpCrashDumpKey, a2, KeyValuePartialInformation, KeyValueInformation, 0x210u, ResultLength) >= 0
    && v9 == 4 )
  {
    *a4 = v10;
  }
  else
  {
    *a4 = a3;
  }
  return 0LL;
}
