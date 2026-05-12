/*
 * XREFs of RaidQueueDeferredItem @ 0x1C00189D4
 * Callers:
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 *     StorPortPauseDevice @ 0x1C000AC80 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C000AE90 (StorPortResumeDevice.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0019B38 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0027504 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0027C58 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C002D1B0 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C002D6B0 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C002D990 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C002DB30 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C002DD50 (StorPortPause.c)
 *     StorPortReady @ 0x1C002DFC0 (StorPortReady.c)
 *     StorPortResume @ 0x1C002E210 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(__int64 a1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), a2);
  return KeInsertQueueDpc((PRKDPC)(a1 + 8), (PVOID)a1, 0LL);
}
