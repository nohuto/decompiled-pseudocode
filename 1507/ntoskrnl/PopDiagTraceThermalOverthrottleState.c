/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x14023EA6C
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x1406B837C (PopUpdateOverThrottledCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(struct _DEVICE_OBJECT *a1)
{
  return PopDiagTraceThermalStateChange(a1);
}
