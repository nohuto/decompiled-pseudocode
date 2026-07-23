/*
 * XREFs of PdcPoNetworkResiliency @ 0x14066FB44
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x14014B7CC (PopQueueWorkItem.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopNetArmDsEvaluationTimer @ 0x1406736FC (PopNetArmDsEvaluationTimer.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(char a1)
{
  PopAcquirePolicyLock();
  if ( a1 )
  {
    PopNetResiliencyEngaged = 1;
    _InterlockedExchange(&PopNetGracePeriodState, 1);
    PopNetArmDsEvaluationTimer();
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_1403026A8);
  }
  return PopReleasePolicyLock();
}
