/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x1406D9834
 * Callers:
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1406DCA98 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1406DF258 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_14031CCA5 )
  {
    result = KeCancelTimer(&stru_140335100);
    byte_14031CCA5 = 0;
  }
  return result;
}
