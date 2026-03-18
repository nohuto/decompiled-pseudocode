/*
 * XREFs of RIMUnRegisterForDeviceChangeNotifications @ 0x1C00DA9AC
 * Callers:
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RIMUnRegisterForDeviceChangeNotifications(PVOID NotificationEntry)
{
  return IoUnregisterPlugPlayNotification(NotificationEntry);
}
