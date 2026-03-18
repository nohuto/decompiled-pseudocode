/*
 * XREFs of VerifierIoUnregisterPlugPlayNotification @ 0x1406C0884
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return pXdvIoUnregisterPlugPlayNotification(NotificationEntry);
}
