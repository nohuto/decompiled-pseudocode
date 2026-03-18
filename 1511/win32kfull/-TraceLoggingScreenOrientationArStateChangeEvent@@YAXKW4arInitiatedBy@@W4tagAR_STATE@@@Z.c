/*
 * XREFs of ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C0225FD4
 * Callers:
 *     xxxAutoRotateScreen @ 0x1C01D2848 (xxxAutoRotateScreen.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingScreenOrientationArStateChangeEvent(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-29h] BYREF
  int v5; // [rsp+34h] [rbp-25h] BYREF
  int v6; // [rsp+38h] [rbp-21h] BYREF
  int v7; // [rsp+3Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  int *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  int *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  int *v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v5 = (int)v1;
      v9 = &v5;
      v11 = &v7;
      v13 = &v4;
      v15 = &v6;
      v10 = 4LL;
      v7 = 0;
      v12 = 4LL;
      v4 = 0;
      v14 = 4LL;
      v6 = (int)v2;
      v16 = 4LL;
      TlgWrite(v1, &unk_1C02E9B30, v2, v3, 6u, &pData);
    }
  }
}
