/*
 * XREFs of TtmiLogQueueHandleOpened @ 0x14067B718
 * Callers:
 *     TtmpOpenQueueHandle @ 0x14067A460 (TtmpOpenQueueHandle.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void TtmiLogQueueHandleOpened()
{
  int v0; // r9d
  __int64 v1; // r10
  __int64 v2; // r11
  int v3; // [rsp+30h] [rbp-29h] BYREF
  __int64 v4; // [rsp+38h] [rbp-21h] BYREF
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  __int64 *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  int *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407478B0, 1uLL) )
    {
      v4 = v2;
      v7 = &v4;
      v9 = &v5;
      v11 = &v3;
      v5 = v1;
      v3 = v0;
      v8 = 8LL;
      v10 = 8LL;
      v12 = 4LL;
      TlgWrite(&stru_1407478B0, &unk_14027D9C4, 0LL, 0LL, 5u, &pData);
    }
  }
}
