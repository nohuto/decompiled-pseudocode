/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x1404C5E8C
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobClose @ 0x1404C5D4C (PspJobClose.c)
 *     NtTerminateJobObject @ 0x1404C5E20 (NtTerminateJobObject.c)
 *     PsTerminateServerSilo @ 0x14067E25C (PsTerminateServerSilo.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140468E34 (PspEvaluateAndNotifyEmptyJob.c)
 *     EtwTraceJob @ 0x1406A18D4 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, unsigned int a2, char a3)
{
  char v5; // di
  bool v6; // al
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  bool v9; // [rsp+44h] [rbp+Ch]

  _InterlockedOr((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x80u);
  _InterlockedOr((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x80u);
  v5 = 0;
  v8 = a2;
  v9 = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Event, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2);
  v6 = v9;
  if ( (v9 & 2) != 0 )
  {
    v5 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Event, 0, 0);
    v6 = v9;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Event, v6, a2, 1825LL);
  return v5;
}
