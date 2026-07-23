/*
 * XREFs of TtmiLogSessionDisplayRequiredDereference @ 0x14067BA74
 * Callers:
 *     TtmNotifySessionDisplayRequiredChange @ 0x140678B14 (TtmNotifySessionDisplayRequiredChange.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void TtmiLogSessionDisplayRequiredDereference()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // r11d
  int v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+34h] [rbp-15h] BYREF
  int v5; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407478B0, 1uLL) )
    {
      v3 = v2;
      v7 = &v3;
      v9 = &v4;
      v11 = &v5;
      v4 = v1;
      v5 = v0;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      TlgWrite(&stru_1407478B0, &unk_14027DC7A, 0LL, 0LL, 5u, &pData);
    }
  }
}
