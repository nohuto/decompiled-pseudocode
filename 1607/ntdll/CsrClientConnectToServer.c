/*
 * XREFs of CsrClientConnectToServer @ 0x1800751B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetDllHandle @ 0x180012190 (LdrGetDllHandle.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     CsrpConnectToServer @ 0x180075364 (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x18007572C (CsrpClientConnectToServer.c)
 *     RtlCreateTagHeap @ 0x180075D90 (RtlCreateTagHeap.c)
 *     LdrGetProcedureAddress @ 0x180075ED0 (LdrGetProcedureAddress.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
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
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v12);
  v10 = CsrClientProcess;
  if ( *(_WORD *)(v12 + 92) != 1 )
    v10 = 1;
  CsrClientProcess = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandle(0, 0, (int)&unk_1801086F0, (__int64)v13);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddress(v13[0], &unk_1801086E0, 0LL, &CsrServerApiRoutine);
    if ( (int)result < 0 )
      return result;
    CsrPortHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap((void *)CsrPortHeap);
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
