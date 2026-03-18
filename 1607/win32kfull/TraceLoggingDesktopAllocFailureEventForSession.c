/*
 * XREFs of TraceLoggingDesktopAllocFailureEventForSession @ 0x1C021F5D8
 * Callers:
 *     FreeWindowStation @ 0x1C00F92C0 (FreeWindowStation.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingDesktopAllocFailureEventForSession(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6)
{
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // r10
  int v9; // r11d
  int v10; // [rsp+30h] [rbp-69h] BYREF
  int v11; // [rsp+38h] [rbp-61h] BYREF
  int v12; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v13; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v15; // [rsp+70h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-21h]
  __int64 *v17; // [rsp+80h] [rbp-19h]
  __int64 v18; // [rsp+88h] [rbp-11h]
  int *v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  int *v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  char *v23; // [rsp+B0h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+1Fh]
  char *v25; // [rsp+C0h] [rbp+27h]
  __int64 v26; // [rsp+C8h] [rbp+2Fh]

  v10 = 0;
  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000000uLL) )
    {
      v16 = 4LL;
      v15 = &v10;
      v13 = v8;
      v17 = &v13;
      v19 = &v11;
      v21 = &v12;
      v23 = &a5;
      v25 = &a6;
      v18 = (unsigned int)(v9 + 8);
      v11 = (int)v7;
      v20 = 4LL;
      v12 = 3;
      v22 = 4LL;
      v24 = v18;
      v26 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EF0B5, v6, v7, v9 + 8, &pData);
    }
  }
}
