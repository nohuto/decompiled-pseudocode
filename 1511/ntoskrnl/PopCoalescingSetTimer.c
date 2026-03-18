/*
 * XREFs of PopCoalescingSetTimer @ 0x1401EC8DC
 * Callers:
 *     PopCoalescingActivate @ 0x140635B48 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x140635C3C (PopCoalescingNotify.c)
 * Callees:
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 */

BOOLEAN PopCoalescingSetTimer()
{
  BOOLEAN result; // al

  if ( PopCoalescingState )
  {
    PopPrintEx(3u, "PopCoalescing: Coalescing timer activated\n");
    result = KeSetTimer(
               &PopCoalescingTimer,
               (LARGE_INTEGER)(-10000000LL * PopCoalescingTimerInterval),
               &PopCoalescingTimerDpc);
    _interlockedbittestandset((volatile signed __int32 *)&PopCoalescingTimer, 9u);
  }
  return result;
}
