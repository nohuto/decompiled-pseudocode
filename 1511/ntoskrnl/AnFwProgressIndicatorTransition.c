/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1406D916C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_1403069E7 )
  {
    KeInitializeTimerEx(&stru_14031ADA0, NotificationTimer);
    KeInitializeDpc(&stru_14031AD60, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_14031ADA0, 0LL, 0x1Eu, 0, &stru_14031AD60);
  }
  return result;
}
