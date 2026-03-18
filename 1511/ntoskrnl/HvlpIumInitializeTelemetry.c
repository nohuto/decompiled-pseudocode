/*
 * XREFs of HvlpIumInitializeTelemetry @ 0x140782AA8
 * Callers:
 *     HvlPhase2Initialize @ 0x140142738 (HvlPhase2Initialize.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 *     TraceLoggingRegisterEx @ 0x14052451C (TraceLoggingRegisterEx.c)
 */

char HvlpIumInitializeTelemetry()
{
  char result; // al
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  _DWORD v6[4]; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  __int64 v11; // [rsp+70h] [rbp+27h]
  _DWORD v12[2]; // [rsp+78h] [rbp+2Fh] BYREF
  _DWORD *v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  result = TraceLoggingRegisterEx(&stru_1402CF860, 0LL, 0LL);
  if ( (*(_DWORD *)(KeLoaderBlock_0 + 264) & 1) != 0 )
  {
    if ( stru_1402CF860.LevelPlus1 <= 5 )
      goto LABEL_8;
    result = TlgKeywordOn(&stru_1402CF860, 0x400000000000uLL);
    if ( result )
    {
      v3 = *(_QWORD *)(v2 + 240);
      v6[0] = (v1 >> 3) & 1;
      v4 = *(unsigned __int16 *)(v3 + 2400);
      v5 = *(_QWORD *)(v3 + 2408);
      v10 = 0;
      v12[1] = 0;
      v15 = 0;
      v11 = v5;
      v13 = v6;
      v8 = v12;
      v9 = 2;
      v12[0] = v4;
      v14 = 4;
      result = TlgWrite(&stru_1402CF860, &unk_1402538E0, 0LL, 0LL, 5u, &pData);
    }
  }
  if ( stru_1402CF860.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&stru_1402CF860, 0x400000000000uLL);
    if ( result )
    {
      v9 = 4;
      v10 = 0;
      v6[0] = ((unsigned int)HvlpFlags >> 13) & 1;
      v8 = v6;
      result = TlgWrite(&stru_1402CF860, &unk_1402538BB, 0LL, 0LL, 3u, &pData);
    }
  }
LABEL_8:
  if ( (HvlpFlags & 0x2000) == 0 )
  {
    result = EtwUnregister(stru_1402CF860.RegHandle);
    stru_1402CF860.RegHandle = 0LL;
    stru_1402CF860.LevelPlus1 = 0;
  }
  return result;
}
