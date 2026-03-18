/*
 * XREFs of PspInitializeJobStructures @ 0x1407716CC
 * Callers:
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

__int64 (*PspInitializeJobStructures())()
{
  __int64 (*result)(); // rax

  qword_1406FB330 = (__int64)&PspJobList;
  PspJobList = (__int64)&PspJobList;
  PspJobNotificationItem.WorkerRoutine = (void (__fastcall *)(void *))PspJobNotificationWorker;
  result = PspJobTimeLimitsWork;
  PspJobTimeLimitsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspJobTimeLimitsWork;
  PspJobListLock = 0LL;
  PspJobAssignmentLock = 0LL;
  PspJobNotificationItem.Parameter = 0LL;
  PspJobNotificationItem.List.Flink = 0LL;
  PspJobTimeLimitsWorkItem.Parameter = 0LL;
  PspJobTimeLimitsWorkItem.List.Flink = 0LL;
  if ( !PspJobNoWakeChargeLimit )
    PspJobNoWakeChargeLimit = 50;
  if ( !PspSystemNoWakeChargeLimit )
    PspSystemNoWakeChargeLimit = 200;
  return result;
}
