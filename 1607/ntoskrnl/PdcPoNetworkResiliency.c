/*
 * XREFs of PdcPoNetworkResiliency @ 0x14066FA60
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x1400F97C0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x14014B25C (PopQueueWorkItem.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopNetArmDsEvaluationTimer @ 0x140673618 (PopNetArmDsEvaluationTimer.c)
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
    PopQueueWorkItem((__int64)&unk_140302668);
  }
  return PopReleasePolicyLock();
}
