/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C0078294
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C001A680 (RIMDirectStartStopDeviceRead.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00758D8 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C00CDC94 (RIMComputeVirtualDesktopPhysicalSize.c)
 * Callees:
 *     IsIsRemoteConnectionSupported_0 @ 0x1C0002E70 (IsIsRemoteConnectionSupported_0.c)
 */

__int64 ApiSetIsRemoteConnection()
{
  if ( (int)IsIsRemoteConnectionSupported_0() < 0 )
    return 0LL;
  else
    return IsRemoteConnection_0();
}
