/*
 * XREFs of CsrClientConnectToServer @ 0x180051EF0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetDllHandle @ 0x1800110A0 (LdrGetDllHandle.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddress @ 0x18004EE30 (LdrGetProcedureAddress.c)
 *     RtlCreateTagHeap @ 0x18004EF00 (RtlCreateTagHeap.c)
 *     CsrpClientConnectToServer @ 0x180051680 (CsrpClientConnectToServer.c)
 *     CsrpConnectToServer @ 0x1800520A4 (CsrpConnectToServer.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800C7844 (CsrpLocalSetupForSecureProcess.c)
 */

int __fastcall CsrClientConnectToServer(void *Src, int a2, void *a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  int result; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-28h] BYREF
  PVOID DllHandle; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v14) = -1073741823;
  if ( a3 && !a4 )
    return -1073741811;
  if ( !CsrInitOnceDone )
  {
    v9 = NtCurrentPeb();
    CsrInitOnceDone = 1;
    CsrHeap = v9->ProcessHeap;
  }
  if ( CsrServerApiRoutine && !CsrClientProcess )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0;
  }
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  v10 = CsrClientProcess;
  if ( OutHeaders->OptionalHeader.Subsystem != 1 )
    v10 = 1;
  CsrClientProcess = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandle(0LL, 0LL, (PUNICODE_STRING)&DllName, &DllHandle);
    if ( result < 0 )
      return result;
    result = LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&ProcedureName, 0, (PVOID *)&CsrServerApiRoutine);
    if ( result < 0 )
      return result;
    CsrPortHeap = NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap(CsrPortHeap, 0, (PWSTR)L"CSRPORT!", (PWSTR)L"CAPTURE");
    goto LABEL_23;
  }
  result = 0;
  if ( LdrpIsSecureProcess )
  {
    if ( a2 == 1 )
      result = CsrpLocalSetupForSecureProcess();
    else
      result = -1073741637;
  }
  else if ( a3 )
  {
    if ( CsrPortHandle )
      goto LABEL_19;
    result = CsrpConnectToServer(Src, (__int64)&v14);
    if ( result < 0 )
      return result;
    if ( (int)v14 < 0 )
LABEL_19:
      result = CsrpClientConnectToServer(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
