/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x14020B1B8
 * Callers:
 *     <none>
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400D46D4 (PpmReleaseLock.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140208D2C (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140208DC4 (PopDiagTraceIdleResiliencyStart.c)
 */

void PopDeepSleepEvaluateCallback()
{
  KIRQL v0; // al
  __int64 v1; // rcx
  KIRQL v2; // di
  int v3; // r9d
  bool v4; // bl

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    LOBYTE(v1) = PopDeepSleepIsEngaged;
    v2 = v0;
    v3 = (PopDeepSleepEnforced != 0) | 2;
    v4 = PopDeepSleepDisengageReasonMask == 0;
    if ( PopDeepSleepIsEngaged == (PopDeepSleepDisengageReasonMask == 0) )
      break;
    if ( PopDeepSleepDisengageReasonMask )
      PopDiagTraceIdleResiliencyEnd(v1, v3);
    else
      PopDiagTraceIdleResiliencyStart(v1, v3, 0x1E / KeMaximumIncrement + 1);
    PopDeepSleepIsEngaged = v4;
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v2);
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v0);
}
