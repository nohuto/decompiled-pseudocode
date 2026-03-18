/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x14075C350
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140356CF7 )
  {
    KeInitializeTimerEx(&stru_14036B190, NotificationTimer);
    KeInitializeDpc(&stru_14036B150, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_14036B190, 0LL, 0x1Eu, 0, &stru_14036B150);
  }
  return result;
}
