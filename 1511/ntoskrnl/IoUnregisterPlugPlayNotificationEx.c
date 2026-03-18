/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x1404EA808
 * Callers:
 *     VerifierIoUnregisterPlugPlayNotificationEx @ 0x1406C088C (VerifierIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 1);
}
