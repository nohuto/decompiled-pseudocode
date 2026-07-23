/*
 * XREFs of PopCoalescingSetTimer @ 0x14020541C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140205380 (PopCoalescingSetActiveState.c)
 *     PopCoalescingNotify @ 0x14066E158 (PopCoalescingNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 */

__int64 PopCoalescingSetTimer()
{
  __int64 result; // rax

  if ( (PopCoalescingState & 1) != 0 )
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
