/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140672610
 * Callers:
 *     PopPolicyWorkerThread @ 0x140009874 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopForceCompleteCsSleepStudySession @ 0x140126C08 (PopForceCompleteCsSleepStudySession.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopForceCompleteCsSleepStudySession(2u);
  return 0LL;
}
