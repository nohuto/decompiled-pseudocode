/*
 * XREFs of ?TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z @ 0x1C021DE2C
 * Callers:
 *     ?_SuppressDeadzoneContactsInFrame@PalmRejection@@YAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C02295D0 (-_SuppressDeadzoneContactsInFrame@PalmRejection@@YAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingEdgePalmRejection(struct tagPOINT a1, struct tagPOINT a2)
{
  const GUID *v2; // r8
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  const GUID *v5; // r9
  int v6; // [rsp+30h] [rbp-29h] BYREF
  int v7; // [rsp+34h] [rbp-25h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  int *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  __int64 *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  char *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000000uLL) )
    {
      v6 = v3;
      v10 = &v6;
      v12 = &v7;
      v5 = (const GUID *)HIDWORD(v3);
      v14 = &v8;
      v8 = v4;
      v16 = (char *)&v8 + 4;
      v11 = 4LL;
      v7 = (int)v5;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE402, v2, v5, 6u, &pData);
    }
  }
}
