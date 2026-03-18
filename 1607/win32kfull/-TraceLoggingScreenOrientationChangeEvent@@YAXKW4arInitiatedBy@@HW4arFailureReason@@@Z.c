/*
 * XREFs of ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C021F0C4
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxAutoRotateScreen @ 0x1C01CA304 (xxxAutoRotateScreen.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingScreenOrientationChangeEvent(__int64 a1, __int64 a2, int a3)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // r10d
  int v6; // r11d
  int v7; // [rsp+30h] [rbp-29h] BYREF
  int v8; // [rsp+34h] [rbp-25h] BYREF
  int v9; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  int *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  int *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  int *v17; // [rsp+90h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+D0h] [rbp+77h] BYREF

  v19 = a3;
  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000001uLL) )
    {
      v7 = v6;
      v11 = &v7;
      v13 = &v8;
      v15 = &v19;
      v17 = &v9;
      v12 = 4LL;
      v8 = v5;
      v14 = 4LL;
      v16 = 4LL;
      v9 = (int)v4;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EF061, v3, v4, 6u, &pData);
    }
  }
}
