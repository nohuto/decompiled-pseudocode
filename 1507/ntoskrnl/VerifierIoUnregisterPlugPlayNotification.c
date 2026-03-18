/*
 * XREFs of VerifierIoUnregisterPlugPlayNotification @ 0x140742078
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
