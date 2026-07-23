/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140725854
 * Callers:
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x140728834 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140728B84 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x14072ACB4 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140341C98 )
  {
    result = KeCancelTimer(&stru_1403580B0);
    byte_140341C98 = 0;
  }
  return result;
}
