/*
 * XREFs of PopCoalescingSetTimer @ 0x14023ABF8
 * Callers:
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x1406B540C (PopCoalescingNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 */

char PopCoalescingSetTimer()
{
  char result; // al

  if ( PopCoalescingState )
  {
    PopPrintEx(3u, "PopCoalescing: Coalescing timer activated\n");
    result = KiSetTimerEx(
               (__int64)&PopCoalescingTimer,
               -10000000LL * PopCoalescingTimerInterval,
               0,
               0,
               (__int64)&PopCoalescingTimerDpc);
    _interlockedbittestandset((volatile signed __int32 *)&PopCoalescingTimer, 9u);
  }
  return result;
}
