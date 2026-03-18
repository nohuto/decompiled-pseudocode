/*
 * XREFs of ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C021F318
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C0216610 (NtUserInitializeTouchInjection.c)
 *     NtUserInjectTouchInput @ 0x1C0216970 (NtUserInjectTouchInput.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 */

void __fastcall TraceLoggingTouchInjection(int a1, int a2, int a3)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]
  int v14; // [rsp+C8h] [rbp+6Fh] BYREF
  int v15; // [rsp+D0h] [rbp+77h] BYREF

  v15 = a3;
  v14 = a2;
  if ( a1 == 1 )
  {
    if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
    {
      TlgCreateSz(&pDesc, "InjectTouchInput");
LABEL_8:
      v13 = 4LL;
      v8 = &v14;
      v10 = &v15;
      v12 = &v5;
      v5 = (int)v4;
      v11 = 4LL;
      v9 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE968, v3, v4, 6u, &pData);
    }
  }
  else if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
  {
    TlgCreateSz(&pDesc, "InitializeTouchInjection");
    goto LABEL_8;
  }
}
