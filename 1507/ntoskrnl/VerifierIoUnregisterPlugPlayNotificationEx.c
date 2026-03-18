/*
 * XREFs of VerifierIoUnregisterPlugPlayNotificationEx @ 0x140742080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return pXdvIoUnregisterPlugPlayNotificationEx(NotificationEntry);
}
