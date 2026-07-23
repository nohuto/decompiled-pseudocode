/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x14067EFD8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140013CD0 (PsGetProcessSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400860B0 (PsGetServerSiloServiceSessionId.c)
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 */

int __fastcall PspTerminateSiloSubsystemProcesses(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  _KPROCESS *i; // r9
  unsigned int ProcessSessionId; // eax
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v7; // rbx
  void *ServerSiloGlobals; // rax
  _KPROCESS *v9; // r8
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  BYTE4(v12) = 0;
  PspEnumJobsAndProcessesInJobHierarchy(a1, 0, (int)PspWaitOnAllProcessesJobCallback, 0, (__int64)&v12, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v7 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess((__int64)a1, (__int64)CurrentThread, v11, i);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (NextJobProcess[2].ActiveProcessors.Bitmap[0] & 0x10000000000LL) != 0
      || (NextJobProcess[1].DirectoryTableBase & 1) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionId((__int64)NextJobProcess);
      if ( ProcessSessionId != ServerSiloServiceSessionId )
        PspShutdownCsrProcess((__int64)a1, ProcessSessionId, v7);
    }
  }
  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  v9 = (_KPROCESS *)*((_QWORD *)ServerSiloGlobals + 108);
  if ( v9 )
    LODWORD(ServerSiloGlobals) = PspShutdownCsrProcess((__int64)a1, *((_DWORD *)ServerSiloGlobals + 252), v9);
  return (int)ServerSiloGlobals;
}
