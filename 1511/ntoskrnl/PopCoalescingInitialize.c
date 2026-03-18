/*
 * XREFs of PopCoalescingInitialize @ 0x140765FF0
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140530318 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PoRegisterCoalescingCallback @ 0x140530628 (PoRegisterCoalescingCallback.c)
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
    PopCoalescingTimerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopCoalescingTimer.Processor = 0LL;
    PopCoalescingTimerDpc.TargetInfoAsUlong = 275;
    PopCoalescingTimerDpc.DeferredContext = 0LL;
    PopCoalescingTimerDpc.DpcData = 0LL;
    PopCoalescingTimerDpc.ProcessorHistory = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
