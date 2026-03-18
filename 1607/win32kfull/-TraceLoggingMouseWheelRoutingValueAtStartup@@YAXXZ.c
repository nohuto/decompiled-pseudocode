/*
 * XREFs of ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0135418
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void TraceLoggingMouseWheelRoutingValueAtStartup(void)
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  UPDWORDPointer(8220LL);
  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
    {
      v6 = 0;
      v4 = &v2;
      v2 = (int)v1;
      v5 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE7D1, v0, v1, 3u, &pData);
    }
  }
}
