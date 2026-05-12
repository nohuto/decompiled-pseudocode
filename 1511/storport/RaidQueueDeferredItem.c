/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0014994
 * Callers:
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0007758 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     StorPortPauseDevice @ 0x1C00090B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C00092C0 (StorPortResumeDevice.c)
 *     StorPortPause @ 0x1C0014D30 (StorPortPause.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0024118 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C00248CC (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C00297B8 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0029B20 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0029E10 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0029FB0 (StorPortDeviceReady.c)
 *     StorPortReady @ 0x1C002A300 (StorPortReady.c)
 *     StorPortResume @ 0x1C002A550 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(__int64 a1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), a2);
  return KeInsertQueueDpc((PRKDPC)(a1 + 8), (PVOID)a1, 0LL);
}
