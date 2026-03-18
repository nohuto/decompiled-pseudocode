/*
 * XREFs of ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0226258
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C021CB30 (NtUserInitializeTouchInjection.c)
 *     NtUserInjectTouchInput @ 0x1C021CE90 (NtUserInjectTouchInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00945B8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingTouchInjection(const struct _TlgProvider_t *a1, int a2, int a3)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // r10d
  _DWORD v6[4]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  _DWORD *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+C8h] [rbp+6Fh] BYREF
  int v16; // [rsp+D0h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  if ( (_DWORD)a1 == 1 )
  {
    if ( (unsigned int)dword_1C031B280 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      TlgCreateSz(&pDesc, "InjectTouchInput");
LABEL_8:
      v14 = 4LL;
      v9 = &v15;
      v11 = &v16;
      v13 = v6;
      v6[0] = v5;
      v12 = 4LL;
      v10 = 4LL;
      TlgWrite((TraceLoggingHProvider)v6, &unk_1C02E95C1, v3, v4, 6u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C031B280 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
  {
    TlgCreateSz(&pDesc, "InitializeTouchInjection");
    goto LABEL_8;
  }
}
