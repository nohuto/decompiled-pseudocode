/*
 * XREFs of PopCoalescingInitialize @ 0x1407D977C
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405A6C70 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PoRegisterCoalescingCallback @ 0x1405A7100 (PoRegisterCoalescingCallback.c)
 */

__int64 PopCoalescingInitialize()
{
  __int64 result; // rax

  PopCoalescingState = 0;
  result = PoRegisterCoalescingCallback(
             (unsigned __int64)PopPoCoalescinCallback,
             0,
             (struct _EX_RUNDOWN_REF **)&PopCoalescingRegistration,
             0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&PopCoalescingTimer.Header.Lock = 8LL;
    PopCoalescingTimer.Header.WaitListHead.Blink = &PopCoalescingTimer.Header.WaitListHead;
    PopCoalescingTimer.Header.WaitListHead.Flink = &PopCoalescingTimer.Header.WaitListHead;
    qword_14032F0B8 = (__int64)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopCoalescingTimer.Processor = 0LL;
    PopCoalescingTimerDpc = 275;
    qword_14032F0C0 = 0LL;
    qword_14032F0D8 = 0LL;
    qword_14032F0B0 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
