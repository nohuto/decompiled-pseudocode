/*
 * XREFs of PopControlDeepSleep @ 0x1406BE32C
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140565960 (PopEnforceDeepSleep.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1406B972C (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1406B97C4 (PopDiagTraceIdleResiliencyStart.c)
 */

int __fastcall PopControlDeepSleep(__int64 a1)
{
  char v1; // bl
  int v2; // r9d

  v1 = a1;
  v2 = (PopDeepSleepEnforced != 0) | 2;
  if ( (_BYTE)a1 )
    PopDiagTraceIdleResiliencyStart(a1, v2, 0x1E / KeMaximumIncrement + 1);
  else
    PopDiagTraceIdleResiliencyEnd(a1, v2);
  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
  PopDeepSleepIsEngaged = v1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
