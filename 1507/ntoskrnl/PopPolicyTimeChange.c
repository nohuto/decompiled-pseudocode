/*
 * XREFs of PopPolicyTimeChange @ 0x140569D14
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400D0054 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopEventCalloutDispatch @ 0x14014FBB8 (PopEventCalloutDispatch.c)
 */

__int64 PopPolicyTimeChange()
{
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
