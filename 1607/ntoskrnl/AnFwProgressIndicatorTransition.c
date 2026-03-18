/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140725550
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D6DC (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400EFC00 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1400F0C50 (KeInitializeTimerEx.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140328C10 )
  {
    KeInitializeTimerEx(&stru_140340420, NotificationTimer);
    KeInitializeDpc(&stru_1403403A0, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140340420, 0LL, 0x1Eu, 0, &stru_1403403A0);
  }
  return result;
}
