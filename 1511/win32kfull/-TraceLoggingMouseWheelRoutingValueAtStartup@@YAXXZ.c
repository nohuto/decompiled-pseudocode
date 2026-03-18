/*
 * XREFs of ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C009E0C8
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void TraceLoggingMouseWheelRoutingValueAtStartup(void)
{
  const struct _TlgProvider_t *v0; // rcx
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v0 = (const struct _TlgProvider_t *)*(unsigned int *)UPDWORDPointer(8220LL);
  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    if ( TlgKeywordOn(v0, 0x200000000000uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = (int)v1;
      v7 = 4;
      TlgWrite(v1, &unk_1C02E94A8, v2, v3, 3u, &pData);
    }
  }
}
