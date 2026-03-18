/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x1404EA810
 * Callers:
 *     VerifierIoUnregisterPlugPlayNotification @ 0x1406C0884 (VerifierIoUnregisterPlugPlayNotification.c)
 *     SbpWaitForVmbus @ 0x140787A64 (SbpWaitForVmbus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 0);
}
