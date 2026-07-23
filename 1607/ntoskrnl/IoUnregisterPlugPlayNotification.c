/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x14052DD24
 * Callers:
 *     SbpWaitForVmbus @ 0x1407D3C00 (SbpWaitForVmbus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 0);
}
