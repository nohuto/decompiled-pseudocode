/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x1401F06D8
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x140638278 (PopUpdateOverThrottledCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(struct _DEVICE_OBJECT *a1)
{
  return PopDiagTraceThermalStateChange(a1);
}
