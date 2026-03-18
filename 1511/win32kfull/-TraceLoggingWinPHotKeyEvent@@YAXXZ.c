/*
 * XREFs of ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C0226354
 * Callers:
 *     ?WinlogonHotkeyCallback@@YAX_K_J@Z @ 0x1C01D9DE0 (-WinlogonHotkeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingWinPHotKeyEvent(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
      TlgWrite(v1, &unk_1C02E9B89, v2, v3, 2u, &pData);
  }
}
