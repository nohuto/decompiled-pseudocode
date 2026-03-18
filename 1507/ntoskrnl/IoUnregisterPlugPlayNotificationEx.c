/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x14056054C
 * Callers:
 *     VerifierIoUnregisterPlugPlayNotificationEx @ 0x140742080 (VerifierIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  __int64 v1; // r8
  __int64 v2; // r9

  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 1, v1, v2);
}
