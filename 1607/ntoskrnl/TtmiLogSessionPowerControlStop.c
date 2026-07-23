/*
 * XREFs of TtmiLogSessionPowerControlStop @ 0x14067BDC0
 * Callers:
 *     TtmpSessionPowerControl @ 0x1406790A4 (TtmpSessionPowerControl.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
      TlgWrite(&stru_1407478B0, &unk_14027E417, 0LL, 0LL, 3u, &pData);
    }
  }
}
