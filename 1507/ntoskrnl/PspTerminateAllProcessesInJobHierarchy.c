/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x14054DD84
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140506F48 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobClose @ 0x14054DB88 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x14054DD0C (NtTerminateJobObject.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140505E20 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x1406E3A0C (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, int a2, char a3)
{
  char v5; // bl
  bool v6; // al
  int v8; // [rsp+40h] [rbp+8h] BYREF
  bool v9; // [rsp+44h] [rbp+Ch]

  _InterlockedOr(&Event[54].Header.Lock, 0x80u);
  v5 = 0;
  v8 = a2;
  v9 = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Event, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2u);
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
    EtwTraceJob((_DWORD)Event, 0, v6, a2, 1825);
  return v5;
}
