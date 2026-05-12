/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0012944
 * Callers:
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 *     StorPortPauseDevice @ 0x1C00072E0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0007560 (StorPortResumeDevice.c)
 *     StorPortPause @ 0x1C0012C10 (StorPortPause.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0021AD8 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0022168 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0022388 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C0027514 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0027870 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0027B50 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0027CF0 (StorPortDeviceReady.c)
 *     StorPortReady @ 0x1C0028090 (StorPortReady.c)
 *     StorPortResume @ 0x1C00282E0 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(__int64 a1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), a2);
  return KeInsertQueueDpc((PRKDPC)(a1 + 8), (PVOID)a1, 0LL);
}
