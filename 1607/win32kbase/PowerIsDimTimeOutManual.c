/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C0053180
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C00531CC (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

char PowerIsDimTimeOutManual()
{
  char v0; // bl
  const GUID *v2; // r9
  unsigned int v3; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  if ( !(unsigned int)GetConfigUlong(
                        L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power",
                        L"ManualDimTimeout",
                        &v3)
    || !v3 )
  {
    return 0;
  }
  v0 = 1;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01039D1, 0LL, v2, 2u, &pData);
  return v0;
}
