/*
 * XREFs of TtmiLogSessionPowerControlStop @ 0x14067BCDC
 * Callers:
 *     TtmpSessionPowerControl @ 0x140678FC0 (TtmpSessionPowerControl.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void TtmiLogSessionPowerControlStop()
{
  int SessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407478B0, 1uLL) )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = SessionId;
      v3 = &v1;
      v4 = 4;
      TlgWrite(&stru_1407478B0, &unk_14027E317, 0LL, 0LL, 3u, &pData);
    }
  }
}
