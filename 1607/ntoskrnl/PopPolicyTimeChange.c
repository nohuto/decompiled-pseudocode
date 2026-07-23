/*
 * XREFs of PopPolicyTimeChange @ 0x140534F0C
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400093E8 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopEventCalloutDispatch @ 0x1401321D4 (PopEventCalloutDispatch.c)
 */

__int64 PopPolicyTimeChange()
{
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
