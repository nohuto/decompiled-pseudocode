/*
 * XREFs of ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C002E9E0
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002EA58 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002ECB4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoTargetRemote::UnregisterForPnpNotification(FxIoTargetRemote *this, void *Handle)
{
  if ( Handle )
  {
    if ( FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx )
      FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx(Handle);
    else
      IoUnregisterPlugPlayNotification(Handle);
  }
}
