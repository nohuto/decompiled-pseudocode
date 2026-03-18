/*
 * XREFs of TraceLoggingWriteMiracastStartSessionEntry @ 0x1C0031DD4
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastStartSessionEntry()
{
  const GUID *v0; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const GUID *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C00568C0 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x400000000000uLL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 16;
      TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003E17C, v0, v0, 3u, &pData);
    }
  }
}
