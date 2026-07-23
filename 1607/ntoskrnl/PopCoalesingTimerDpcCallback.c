/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x140205474
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x140008680 (PopGetPolicyWorker.c)
 */

void PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  PopCheckForWork();
}
