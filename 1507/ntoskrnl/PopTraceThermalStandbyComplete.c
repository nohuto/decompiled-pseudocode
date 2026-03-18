/*
 * XREFs of PopTraceThermalStandbyComplete @ 0x14023F27C
 * Callers:
 *     PopThermalStandbyEndTracking @ 0x1401485D4 (PopThermalStandbyEndTracking.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void PopTraceThermalStandbyComplete()
{
  unsigned __int8 v0; // r9
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

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v4 = v0;
      v7 = &v5;
      v9 = &v3;
      v11 = &v4;
      v5 = v2;
      v3 = v1;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      TlgWrite(&pCallbackContext, &unk_1402A4AA1, 0LL, 0LL, 5u, &pData);
    }
  }
}
