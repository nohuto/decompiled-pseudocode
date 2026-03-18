/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x1402094B4
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x1406706C4 (PopUpdateOverThrottledCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(struct _DEVICE_OBJECT *a1)
{
  return PopDiagTraceThermalStateChange(a1);
}
