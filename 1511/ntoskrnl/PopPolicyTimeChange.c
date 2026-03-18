/*
 * XREFs of PopPolicyTimeChange @ 0x1404F57E4
 * Callers:
 *     PopPolicyWorkerThread @ 0x14009934C (PopPolicyWorkerThread.c)
 * Callees:
 *     PopEventCalloutDispatch @ 0x14011B894 (PopEventCalloutDispatch.c)
 */

__int64 PopPolicyTimeChange()
{
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
