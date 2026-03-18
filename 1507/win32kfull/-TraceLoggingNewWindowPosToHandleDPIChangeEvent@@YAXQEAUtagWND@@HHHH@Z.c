/*
 * XREFs of ?TraceLoggingNewWindowPosToHandleDPIChangeEvent@@YAXQEAUtagWND@@HHHH@Z @ 0x1C0224368
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C007C2B8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingNewWindowPosToHandleDPIChangeEvent(
        struct tagWND *const a1,
        int a2,
        int a3,
        int a4,
        char a5)
{
  __int64 v5; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  const CHAR *ProcessImageFileName; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-21h]
  int v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+74h] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-11h] BYREF
  int *v16; // [rsp+88h] [rbp-1h]
  int v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+94h] [rbp+Bh]
  int *v19; // [rsp+98h] [rbp+Fh]
  int v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A4h] [rbp+1Bh]
  int *v22; // [rsp+A8h] [rbp+1Fh]
  int v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+B4h] [rbp+2Bh]
  char *v25; // [rsp+B8h] [rbp+2Fh]
  int v26; // [rsp+C0h] [rbp+37h]
  int v27; // [rsp+C4h] [rbp+3Bh]
  int v28; // [rsp+F0h] [rbp+67h] BYREF
  int v29; // [rsp+F8h] [rbp+6Fh] BYREF
  int v30; // [rsp+100h] [rbp+77h] BYREF

  v30 = a4;
  v29 = a3;
  v28 = a2;
  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v14 = 0;
      v12 = &v10;
      v10 = v5;
      v13 = 8;
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v5);
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
      TlgCreateSz(&pDesc, ProcessImageFileName);
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = &v29;
      v22 = &v30;
      v16 = &v28;
      v25 = &a5;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C02EAD48, v8, v9, 8u, &pData);
    }
  }
}
