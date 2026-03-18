/*
 * XREFs of IsRemoteConnection_0 @ 0x1C0001B40
 * Callers:
 *     ApiSetIsRemoteConnection @ 0x1C00115CC (ApiSetIsRemoteConnection.c)
 *     UpdateGraphicsDeviceList @ 0x1C0021358 (UpdateGraphicsDeviceList.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z @ 0x1C004B210 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     RemoteConnect @ 0x1C00628B0 (RemoteConnect.c)
 *     CleanupRemoteHandles @ 0x1C007ECC0 (CleanupRemoteHandles.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsRemoteConnection_0()
{
  return IsRemoteConnection();
}
