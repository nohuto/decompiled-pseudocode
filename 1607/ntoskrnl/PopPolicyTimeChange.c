/*
 * XREFs of PopPolicyTimeChange @ 0x1405349CC
 * Callers:
 *     PopPolicyWorkerThread @ 0x140009874 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopEventCalloutDispatch @ 0x140131C64 (PopEventCalloutDispatch.c)
 */

__int64 PopPolicyTimeChange()
{
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
