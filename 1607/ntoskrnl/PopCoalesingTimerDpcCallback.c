/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x140205648
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x140008B0C (PopGetPolicyWorker.c)
 */

void PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  PopCheckForWork();
}
