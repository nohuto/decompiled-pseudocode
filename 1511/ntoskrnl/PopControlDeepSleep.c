/*
 * XREFs of PopControlDeepSleep @ 0x14063DA90
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x1404F7178 (PopEnforceDeepSleep.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x1400970CC (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140639638 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1406396D0 (PopDiagTraceIdleResiliencyStart.c)
 */

LONG __fastcall PopControlDeepSleep(__int64 a1)
{
  char v1; // bl
  int v2; // r9d

  v1 = a1;
  v2 = (PopDeepSleepEnforced != 0) | 2;
  if ( (_BYTE)a1 )
    PopDiagTraceIdleResiliencyStart(a1, v2, 0x1E / KeMaximumIncrement + 1);
  else
    PopDiagTraceIdleResiliencyEnd(a1, v2);
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopDeepSleepIsEngaged = v1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
}
