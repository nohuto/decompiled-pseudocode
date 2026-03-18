/*
 * XREFs of IsPowerOnGdiSupported_0 @ 0x1C0002110
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsPowerOnGdiSupported_0()
{
  return IsPowerOnGdiSupported();
}
