/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x1401EC92C
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x1400975A0 (PopGetPolicyWorker.c)
 */

void PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  PopCheckForWork();
}
