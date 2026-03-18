/*
 * XREFs of ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C0224CBC
 * Callers:
 *     NtUserfnINDEVICECHANGE @ 0x1C00EDB20 (NtUserfnINDEVICECHANGE.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C00F3870 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnIMECONTROL @ 0x1C02221D0 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C02227E0 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C007C2B8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingStubInvalidParamEvent(__int64 a1, int a2, char *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  __int64 CurrentProcessWin32Process; // r8
  unsigned __int128 v7; // rax
  TraceLoggingHProvider v8; // rcx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v11; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+37h] BYREF
  int v20; // [rsp+B8h] [rbp+67h] BYREF

  v20 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
  {
    v7 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    v5 = *(const struct _TlgProvider_t **)(CurrentProcessWin32Process + 1000);
    if ( v5 && *((_QWORD *)&v7 + 1) - (_QWORD)v5 <= 0xEA60uLL )
      return;
    *(_QWORD *)(CurrentProcessWin32Process + 1000) = *((_QWORD *)&v7 + 1);
  }
  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(v5, 0x400000000000uLL) )
    {
      v15 = 0;
      v18 = 0;
      v13 = &v20;
      v14 = 4;
      v17 = 4;
      v16 = &v11;
      v11 = a2;
      TlgCreateSz(&pDesc, a3);
      TlgWrite(v8, &unk_1C02EA463, v9, v10, 5u, &pData);
    }
  }
}
