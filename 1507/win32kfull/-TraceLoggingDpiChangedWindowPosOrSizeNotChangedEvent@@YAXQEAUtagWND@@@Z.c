/*
 * XREFs of ?TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent@@YAXQEAUtagWND@@@Z @ 0x1C007E0AC
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = v1;
      v7 = 8;
      TlgWrite(v1, &unk_1C02EAD0A, v2, v3, 3u, &pData);
    }
  }
}
