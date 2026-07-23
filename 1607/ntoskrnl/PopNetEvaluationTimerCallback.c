/*
 * XREFs of PopNetEvaluationTimerCallback @ 0x14020B2BC
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14014B7CC (PopQueueWorkItem.c)
 */

char PopNetEvaluationTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetGracePeriodState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_1403026A8);
  return v0;
}
