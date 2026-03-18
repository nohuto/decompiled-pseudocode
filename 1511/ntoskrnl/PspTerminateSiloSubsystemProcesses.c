/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x140640B1C
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x14063FEE0 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x14003AF8C (PsGetProcessSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     PspGetNextJobProcess @ 0x1403E8CB8 (PspGetNextJobProcess.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     PspWaitForUsermodeExit @ 0x1406419A4 (PspWaitForUsermodeExit.c)
 */

int __fastcall PspTerminateSiloSubsystemProcesses(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v2; // rdi
  _KPROCESS *v3; // r9
  _KPROCESS *Process; // rbp
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v6; // rbx
  int *ServerSiloGlobals; // rax
  _KPROCESS *v8; // r9
  int v9; // ebp
  unsigned int ProcessSessionId; // eax
  _KPROCESS *v11; // rax
  _KPROCESS *v12; // rbx
  void *v13; // rax
  _KPROCESS *v14; // r8
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (_QWORD *)a1;
  v3 = 0LL;
  Process = CurrentThread->ApcState.Process;
  while ( 1 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess(a1, (__int64)CurrentThread, v16, v3);
    v6 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (HIDWORD(NextJobProcess[2].SwapListEntry.Next) & 0x100) == 0 && NextJobProcess != Process )
      PspWaitForUsermodeExit(NextJobProcess);
    v3 = v6;
    a1 = (__int64)v2;
  }
  ServerSiloGlobals = (int *)PsGetServerSiloGlobals(v2);
  v8 = 0LL;
  v9 = *ServerSiloGlobals;
  while ( 1 )
  {
    v11 = (_KPROCESS *)PspGetNextJobProcess((__int64)v2, (__int64)CurrentThread, v16, v8);
    v12 = v11;
    if ( !v11 )
      break;
    if ( (v11[1].DirectoryTableBase & 1) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionId((__int64)v11);
      if ( ProcessSessionId != v9 )
        PspShutdownCsrProcess(v2, ProcessSessionId, v12);
    }
    v8 = v12;
  }
  v13 = PsGetServerSiloGlobals(v2);
  v14 = (_KPROCESS *)*((_QWORD *)v13 + 5);
  if ( v14 )
    LODWORD(v13) = PspShutdownCsrProcess(v2, *(_DWORD *)v13, v14);
  return (int)v13;
}
