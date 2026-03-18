/*
 * XREFs of ?TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent@@YAXQEAUtagWND@@@Z @ 0x1C0091D88
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent(struct tagWND *const a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  const struct _TlgProvider_t *v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  const struct _TlgProvider_t **v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = v1;
      v7 = 8;
      TlgWrite(v1, &unk_1C02E9D1E, v2, v3, 3u, &pData);
    }
  }
}
