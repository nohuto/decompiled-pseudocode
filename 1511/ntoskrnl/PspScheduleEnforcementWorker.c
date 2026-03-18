/*
 * XREFs of PspScheduleEnforcementWorker @ 0x140642464
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x140417EB0 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1296), 0x100000u);
  _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
  if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
    ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
}
