/*
 * XREFs of xxxAssessPointerContactStateTimerCallback @ 0x1C01CF3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 xxxAssessPointerContactStateTimerCallback()
{
  if ( gbDIT == 1 )
    return WakeDIT(0x10u);
  return xxxAssessPointerContactState().QuadPart;
}
