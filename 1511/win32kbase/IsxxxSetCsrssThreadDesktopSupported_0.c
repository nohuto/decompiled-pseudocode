/*
 * XREFs of IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0002248
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A9454 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXE@Z @ 0x1C00A99A4 (-xxxWaitForVideoPortCalloutReady@@YAXE@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsxxxSetCsrssThreadDesktopSupported_0()
{
  return IsxxxSetCsrssThreadDesktopSupported();
}
