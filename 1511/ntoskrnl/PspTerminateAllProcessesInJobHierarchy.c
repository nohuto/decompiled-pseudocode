/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspJobClose @ 0x140485508 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x140487954 (NtTerminateJobObject.c)
 *     PsTerminateServerSilo @ 0x14063FD38 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1403E9410 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x140660A24 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, int a2, char a3)
{
  char v3; // bl
  bool v6; // al
  int v8; // [rsp+58h] [rbp+20h] BYREF
  bool v9; // [rsp+5Ch] [rbp+24h]

  v3 = 0;
  v8 = a2;
  v9 = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Event, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2u);
  v6 = v9;
  if ( (v9 & 2) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Event, 0, 0);
    v6 = v9;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob((_DWORD)Event, 0, v6, a2, 1825);
  return v3;
}
