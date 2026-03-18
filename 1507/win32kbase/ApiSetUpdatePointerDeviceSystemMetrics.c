/*
 * XREFs of ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C007375C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     IsUpdatePointerDeviceSystemMetricsSupported_0 @ 0x1C0002DC0 (IsUpdatePointerDeviceSystemMetricsSupported_0.c)
 *     UpdatePointerDeviceSystemMetrics_0 @ 0x1C0002DC8 (UpdatePointerDeviceSystemMetrics_0.c)
 */

__int64 ApiSetUpdatePointerDeviceSystemMetrics()
{
  __int64 result; // rax

  result = IsUpdatePointerDeviceSystemMetricsSupported_0();
  if ( (int)result >= 0 )
    return UpdatePointerDeviceSystemMetrics_0();
  return result;
}
