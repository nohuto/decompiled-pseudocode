/*
 * XREFs of EtwpWriteAppStateChange @ 0x14054C90C
 * Callers:
 *     EtwTraceProcess @ 0x14045D50C (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1404A3048 (EtwTraceAppStateChange.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( stru_1402F3640.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1402F3640, 0x200000000001uLL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 94;
      TlgWrite(&stru_1402F3640, &unk_14027EA43, 0LL, 0LL, 3u, &pData);
    }
  }
}
