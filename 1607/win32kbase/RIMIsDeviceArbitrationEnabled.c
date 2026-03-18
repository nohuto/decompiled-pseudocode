/*
 * XREFs of RIMIsDeviceArbitrationEnabled @ 0x1C00D1E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 RIMIsDeviceArbitrationEnabled()
{
  return gDeviceArbitrationType != 0;
}
