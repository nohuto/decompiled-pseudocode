/*
 * XREFs of RegisterCDROMNotify @ 0x1C0157174
 * Callers:
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C015A56C (xxxRegisterForDeviceClassNotifications.c)
 * Callees:
 *     <none>
 */

NTSTATUS RegisterCDROMNotify()
{
  NTSTATUS result; // eax

  result = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    if ( !gCDROMClassRegistrationEntry )
      return IoRegisterPlugPlayNotification(
               EventCategoryDeviceInterfaceChange,
               1u,
               &GUID_DEVINTERFACE_CDROM,
               gpWin32kDriverObject,
               DeviceClassCDROMNotify,
               0LL,
               &gCDROMClassRegistrationEntry);
  }
  return result;
}
