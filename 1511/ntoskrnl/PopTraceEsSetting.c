/*
 * XREFs of PopTraceEsSetting @ 0x140142208
 * Callers:
 *     PopEsUpdateSetting @ 0x14054A80C (PopEsUpdateSetting.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void PopTraceEsSetting()
{
  unsigned __int8 v0; // r9
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  int v4; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v4 = PopEsMode;
      v3 = v0;
      v6 = &v4;
      v8 = &v2;
      v10 = &v3;
      v2 = v1;
      v7 = 4LL;
      v9 = 4LL;
      v11 = 4LL;
      TlgWrite(&pCallbackContext, &unk_140254CB4, 0LL, 0LL, 5u, &pData);
    }
  }
}
