/*
 * XREFs of ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0224C00
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C007D7E8 (xxxApplyOrientationPreference.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D06F4 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxAutoRotateScreen @ 0x1C01D0C4C (xxxAutoRotateScreen.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingScreenOrientationChangeEvent(const struct _TlgProvider_t *a1, __int64 a2, int a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // [rsp+30h] [rbp-29h] BYREF
  int v7; // [rsp+34h] [rbp-25h] BYREF
  int v8; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  int *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  int *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  int *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]
  int v18; // [rsp+D0h] [rbp+77h] BYREF

  v18 = a3;
  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v8 = (int)v3;
      v10 = &v8;
      v12 = &v6;
      v14 = &v18;
      v16 = &v7;
      v11 = 4LL;
      v6 = (int)v4;
      v13 = 4LL;
      v15 = 4LL;
      v7 = (int)v5;
      v17 = 4LL;
      TlgWrite(v3, &unk_1C02EAB1C, v4, v5, 6u, &pData);
    }
  }
}
