/*
 * XREFs of TtmiLogTerminalDestroyed @ 0x14067C3AC
 * Callers:
 *     TtmpDeleteTerminal @ 0x140677FC0 (TtmpDeleteTerminal.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void TtmiLogTerminalDestroyed()
{
  __int64 v0; // r9
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407478B0, 1uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      TlgWrite(&stru_1407478B0, &unk_14027D6A5, 0LL, 0LL, 3u, &pData);
    }
  }
}
