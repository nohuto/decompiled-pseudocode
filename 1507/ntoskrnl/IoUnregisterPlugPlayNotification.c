/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140563DE8
 * Callers:
 *     VerifierIoUnregisterPlugPlayNotification @ 0x140742078 (VerifierIoUnregisterPlugPlayNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  __int64 v1; // r8
  __int64 v2; // r9

  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 0, v1, v2);
}
