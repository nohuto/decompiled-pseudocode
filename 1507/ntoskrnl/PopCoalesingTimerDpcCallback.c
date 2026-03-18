/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14023AC50
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x1400D042C (PopGetPolicyWorker.c)
 */

struct _KTHREAD *PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
