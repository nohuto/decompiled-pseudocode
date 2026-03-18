/*
 * XREFs of ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C00E5700
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 TraceLoggingSendMixedModeTelemetry(void)
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE3C9, v0, v1, 2u, &pData);
  return 1LL;
}
