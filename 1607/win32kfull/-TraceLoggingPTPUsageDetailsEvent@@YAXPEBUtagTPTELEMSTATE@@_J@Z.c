/*
 * XREFs of ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C021EB98
 * Callers:
 *     HandlePTPTelemetry @ 0x1C015526C (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPUsageDetailsEvent(const struct tagTPTELEMSTATE *a1)
{
  const GUID *v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // [rsp+30h] [rbp-79h] BYREF
  int v7; // [rsp+34h] [rbp-75h] BYREF
  int v8; // [rsp+38h] [rbp-71h] BYREF
  int v9; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v10; // [rsp+40h] [rbp-69h] BYREF
  int v11; // [rsp+44h] [rbp-65h] BYREF
  int v12; // [rsp+48h] [rbp-61h] BYREF
  int v13; // [rsp+4Ch] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v15; // [rsp+70h] [rbp-39h]
  __int64 v16; // [rsp+78h] [rbp-31h]
  int *v17; // [rsp+80h] [rbp-29h]
  __int64 v18; // [rsp+88h] [rbp-21h]
  int *v19; // [rsp+90h] [rbp-19h]
  __int64 v20; // [rsp+98h] [rbp-11h]
  int *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  int *v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  int *v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+C8h] [rbp+1Fh]
  int *v27; // [rsp+D0h] [rbp+27h]
  __int64 v28; // [rsp+D8h] [rbp+2Fh]
  int *v29; // [rsp+E0h] [rbp+37h]
  __int64 v30; // [rsp+E8h] [rbp+3Fh]

  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
    {
      v4 = 1000LL * *(_QWORD *)(v2 + 56);
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v6 = v4 / v3;
      v15 = &v6;
      v7 = *(_DWORD *)(v2 + 20);
      v17 = &v7;
      v5 = 1000LL * *(_QWORD *)(v2 + 64);
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v8 = v5 / v3;
      v19 = &v8;
      v9 = *(_DWORD *)(v2 + 44);
      v21 = &v9;
      v10 = *(_DWORD *)(v2 + 72);
      v23 = &v10;
      v11 = *(_DWORD *)(v2 + 76);
      v25 = &v11;
      v12 = *(_DWORD *)(v2 + 80);
      v27 = &v12;
      v13 = *(_DWORD *)(v2 + 84);
      v29 = &v13;
      v28 = 4LL;
      v30 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EED45, v1, (LPCGUID)v2, 0xAu, &pData);
    }
  }
}
