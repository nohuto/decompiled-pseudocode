/*
 * XREFs of TraceLoggingDesktopAllocFailureEvent @ 0x1C021F4A0
 * Callers:
 *     DesktopAlloc @ 0x1C006B8F0 (DesktopAlloc.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?IsTraceLoggingApproved@@YAHXZ @ 0x1C021DDBC (-IsTraceLoggingApproved@@YAHXZ.c)
 */

char __fastcall TraceLoggingDesktopAllocFailureEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6,
        char a7)
{
  int v9; // esi
  int v10; // eax
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v14; // [rsp+38h] [rbp-81h] BYREF
  int v15; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v16; // [rsp+40h] [rbp-79h] BYREF
  __int64 v17; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-61h] BYREF
  int *v19; // [rsp+78h] [rbp-41h]
  __int64 v20; // [rsp+80h] [rbp-39h]
  int *v21; // [rsp+88h] [rbp-31h]
  __int64 v22; // [rsp+90h] [rbp-29h]
  __int64 *v23; // [rsp+98h] [rbp-21h]
  __int64 v24; // [rsp+A0h] [rbp-19h]
  int *v25; // [rsp+A8h] [rbp-11h]
  __int64 v26; // [rsp+B0h] [rbp-9h]
  int *v27; // [rsp+B8h] [rbp-1h]
  __int64 v28; // [rsp+C0h] [rbp+7h]
  char *v29; // [rsp+C8h] [rbp+Fh]
  __int64 v30; // [rsp+D0h] [rbp+17h]
  char *v31; // [rsp+D8h] [rbp+1Fh]
  __int64 v32; // [rsp+E0h] [rbp+27h]
  int v33; // [rsp+108h] [rbp+4Fh] BYREF

  v33 = a1;
  v9 = a2;
  v10 = IsTraceLoggingApproved(a1, a2);
  if ( v10 )
  {
    if ( dword_1C0320840 > 5u )
    {
      LOBYTE(v10) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000000uLL);
      if ( (_BYTE)v10 )
      {
        v20 = 4LL;
        v19 = &v33;
        v21 = &v14;
        v23 = &v17;
        v25 = &v15;
        v16 = a5;
        v27 = &v16;
        v29 = &a6;
        v31 = &a7;
        v14 = v9;
        v22 = 4LL;
        v17 = a3;
        v24 = 8LL;
        v15 = a4;
        v26 = 4LL;
        v28 = 4LL;
        v30 = 8LL;
        v32 = 4LL;
        LOBYTE(v10) = TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EF134, v11, v12, 9u, &pData);
      }
    }
  }
  return v10;
}
