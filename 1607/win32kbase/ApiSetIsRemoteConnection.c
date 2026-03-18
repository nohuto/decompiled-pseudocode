/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C000F57C
 * Callers:
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0005CF4 (RIMComputeVirtualDesktopPhysicalSize.c)
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0010070 (RIMDirectStartStopDeviceRead.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C007FBEC (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     IsIsRemoteConnectionSupported_0 @ 0x1C0002E80 (IsIsRemoteConnectionSupported_0.c)
 */

__int64 ApiSetIsRemoteConnection()
{
  if ( (int)IsIsRemoteConnectionSupported_0() < 0 )
    return 0LL;
  else
    return IsRemoteConnection_0();
}
