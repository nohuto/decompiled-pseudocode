/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x14052D7DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 1);
}
