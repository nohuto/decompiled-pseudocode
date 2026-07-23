/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140725550
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140328C50 )
  {
    KeInitializeTimerEx(&stru_140340460, NotificationTimer);
    KeInitializeDpc(&stru_1403403E0, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140340460, 0LL, 0x1Eu, 0, &stru_1403403E0);
  }
  return result;
}
