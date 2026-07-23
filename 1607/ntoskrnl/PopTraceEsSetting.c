/*
 * XREFs of PopTraceEsSetting @ 0x14014C620
 * Callers:
 *     PopEsUpdateSetting @ 0x140580B4C (PopEsUpdateSetting.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v2 = PopEsMode;
      v4 = v0;
      v6 = &v2;
      v8 = &v3;
      v10 = &v4;
      v3 = v1;
      v7 = 4LL;
      v9 = 4LL;
      v11 = 4LL;
      TlgWrite(&hProvider, &unk_14027D305, 0LL, 0LL, 5u, &pData);
    }
  }
}
