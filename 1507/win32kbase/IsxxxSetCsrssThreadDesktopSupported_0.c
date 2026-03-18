/*
 * XREFs of IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C00021E8
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A49C4 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXE@Z @ 0x1C00A5018 (-xxxWaitForVideoPortCalloutReady@@YAXE@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsxxxSetCsrssThreadDesktopSupported_0()
{
  return IsxxxSetCsrssThreadDesktopSupported();
}
