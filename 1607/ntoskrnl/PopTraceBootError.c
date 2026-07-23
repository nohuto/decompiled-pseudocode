/*
 * XREFs of PopTraceBootError @ 0x140209618
 * Callers:
 *     PopCheckAndClearBootError @ 0x1407BA920 (PopCheckAndClearBootError.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PopTraceBootError()
{
  int *v0; // r9
  int v1; // [rsp+30h] [rbp-49h] BYREF
  int v2; // [rsp+34h] [rbp-45h] BYREF
  int v3; // [rsp+38h] [rbp-41h] BYREF
  int v4; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v5; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v7; // [rsp+70h] [rbp-9h]
  __int64 v8; // [rsp+78h] [rbp-1h]
  int *v9; // [rsp+80h] [rbp+7h]
  __int64 v10; // [rsp+88h] [rbp+Fh]
  int *v11; // [rsp+90h] [rbp+17h]
  __int64 v12; // [rsp+98h] [rbp+1Fh]
  int *v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+A8h] [rbp+2Fh]
  __int64 *v15; // [rsp+B0h] [rbp+37h]
  __int64 v16; // [rsp+B8h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x800000000000uLL) )
    {
      v1 = *v0;
      v2 = v0[1];
      v3 = v0[2];
      v4 = v0[3];
      v5 = v0[4];
      v7 = &v1;
      v9 = &v2;
      v11 = &v3;
      v13 = &v4;
      v15 = &v5;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 8LL;
      TlgWrite(&hProvider, &unk_14027CD13, 0LL, 0LL, 7u, &pData);
    }
  }
}
