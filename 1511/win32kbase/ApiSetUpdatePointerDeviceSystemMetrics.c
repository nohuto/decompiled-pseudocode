/*
 * XREFs of ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0009A58
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     IsUpdatePointerDeviceSystemMetricsSupported_0 @ 0x1C0002DF0 (IsUpdatePointerDeviceSystemMetricsSupported_0.c)
 *     UpdatePointerDeviceSystemMetrics_0 @ 0x1C0002DF8 (UpdatePointerDeviceSystemMetrics_0.c)
 */

__int64 ApiSetUpdatePointerDeviceSystemMetrics()
{
  __int64 result; // rax

  result = IsUpdatePointerDeviceSystemMetricsSupported_0();
  if ( (int)result >= 0 )
    return UpdatePointerDeviceSystemMetrics_0();
  return result;
}
