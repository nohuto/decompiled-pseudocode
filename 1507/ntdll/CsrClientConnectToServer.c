/*
 * XREFs of CsrClientConnectToServer @ 0x180004320
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddress @ 0x180003560 (LdrGetProcedureAddress.c)
 *     RtlCreateTagHeap @ 0x180003610 (RtlCreateTagHeap.c)
 *     CsrpConnectToServer @ 0x1800044D4 (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x180007B28 (CsrpClientConnectToServer.c)
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     LdrGetDllHandle @ 0x180018950 (LdrGetDllHandle.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800BAB28 (CsrpLocalSetupForSecureProcess.c)
 */

__int64 __fastcall CsrClientConnectToServer(void *Src, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v14) = -1073741823;
  if ( a3 && !a4 )
    return 3221225485LL;
  if ( !CsrInitOnceDone )
  {
    v9 = NtCurrentPeb();
    CsrInitOnceDone = 1;
    CsrHeap = (__int64)v9->ProcessHeap;
  }
  if ( CsrServerApiRoutine && !CsrClientProcess )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0LL;
  }
  RtlImageNtHeaderEx(3LL, NtCurrentPeb()->ImageBaseAddress, 0LL, &v12);
  v10 = CsrClientProcess;
  if ( *(_WORD *)(v12 + 92) != 1 )
    v10 = 1;
  CsrClientProcess = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandle(0LL, 0LL, &unk_180100A08, v13);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddress(v13[0], (int)&unk_180100A18, 0, (int)&CsrServerApiRoutine);
    if ( (int)result < 0 )
      return result;
    CsrPortHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap((_DWORD *)CsrPortHeap, 0, (__int64)L"CSRPORT!", L"CAPTURE");
    goto LABEL_23;
  }
  result = 0LL;
  if ( LdrpIsSecureProcess )
  {
    if ( a2 == 1 )
      result = CsrpLocalSetupForSecureProcess();
    else
      result = 3221225659LL;
  }
  else if ( a3 )
  {
    if ( CsrPortHandle )
      goto LABEL_19;
    result = CsrpConnectToServer(Src, (__int64)&v14);
    if ( (int)result < 0 )
      return result;
    if ( (int)v14 < 0 )
LABEL_19:
      result = CsrpClientConnectToServer(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
