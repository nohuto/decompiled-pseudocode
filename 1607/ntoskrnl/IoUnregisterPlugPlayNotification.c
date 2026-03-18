/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x14052D7E4
 * Callers:
 *     SbpWaitForVmbus @ 0x1407D3C00 (SbpWaitForVmbus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 0);
}
