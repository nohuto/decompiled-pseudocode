/*
 * XREFs of VerifierIoUnregisterPlugPlayNotificationEx @ 0x1406C088C
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
