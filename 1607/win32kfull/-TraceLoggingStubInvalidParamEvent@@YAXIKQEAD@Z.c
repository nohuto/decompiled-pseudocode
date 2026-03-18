/*
 * XREFs of ?TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z @ 0x1C021F198
 * Callers:
 *     NtUserfnINDEVICECHANGE @ 0x1C0111590 (NtUserfnINDEVICECHANGE.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C0118360 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnIMECONTROL @ 0x1C021C530 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C021CCB0 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?IsTraceLoggingApproved@@YAHXZ @ 0x1C021DDBC (-IsTraceLoggingApproved@@YAHXZ.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 */

void __fastcall TraceLoggingStubInvalidParamEvent(__int64 a1, __int64 a2, char *const a3)
{
  int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v7; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v9; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+74h] [rbp+23h]
  int *v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+37h] BYREF
  int v16; // [rsp+B8h] [rbp+67h] BYREF

  v16 = a1;
  v4 = a2;
  if ( (unsigned int)IsTraceLoggingApproved(a1, a2) && dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000000uLL) )
    {
      v11 = 0;
      v14 = 0;
      v9 = &v16;
      v10 = 4;
      v13 = 4;
      v12 = &v7;
      v7 = v4;
      TlgCreateSz(&pDesc, a3);
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE38B, v5, v6, 5u, &pData);
    }
  }
}
