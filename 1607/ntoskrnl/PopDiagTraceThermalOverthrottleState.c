/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x1402092E0
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x1406707A8 (PopUpdateOverThrottledCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(struct _DEVICE_OBJECT *a1)
{
  return PopDiagTraceThermalStateChange(a1);
}
