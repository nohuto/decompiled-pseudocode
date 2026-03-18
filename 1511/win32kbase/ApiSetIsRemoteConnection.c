/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C00115CC
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00072B4 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00113D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C00CF004 (RIMComputeVirtualDesktopPhysicalSize.c)
 * Callees:
 *     IsIsRemoteConnectionSupported_0 @ 0x1C0002EA0 (IsIsRemoteConnectionSupported_0.c)
 */

__int64 ApiSetIsRemoteConnection()
{
  if ( (int)IsIsRemoteConnectionSupported_0() < 0 )
    return 0LL;
  else
    return IsRemoteConnection_0();
}
