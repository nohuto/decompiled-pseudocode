/*
 * XREFs of ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C000759C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     IsUpdatePointerDeviceSystemMetricsSupported_0 @ 0x1C0002DD0 (IsUpdatePointerDeviceSystemMetricsSupported_0.c)
 *     UpdatePointerDeviceSystemMetrics_0 @ 0x1C0002DD8 (UpdatePointerDeviceSystemMetrics_0.c)
 */

__int64 ApiSetUpdatePointerDeviceSystemMetrics()
{
  __int64 result; // rax

  result = IsUpdatePointerDeviceSystemMetricsSupported_0();
  if ( (int)result >= 0 )
    return UpdatePointerDeviceSystemMetrics_0();
  return result;
}
