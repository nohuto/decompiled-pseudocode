/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x14075C87C
 * Callers:
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x14075F794 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14075FAE0 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1407622D4 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_14036D02D )
  {
    result = KeCancelTimer(&stru_140386100);
    byte_14036D02D = 0;
  }
  return result;
}
