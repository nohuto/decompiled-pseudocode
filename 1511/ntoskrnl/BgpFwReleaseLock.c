/*
 * XREFs of BgpFwReleaseLock @ 0x14011BFCC
 * Callers:
 *     BgLibraryEnable @ 0x1401178FC (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x14011BF60 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14011E928 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1401C5EFC (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1401C6018 (KiDisplayBlueScreen.c)
 *     BgFreeContext @ 0x1406D91C4 (BgFreeContext.c)
 *     BgGetContext @ 0x1406D93BC (BgGetContext.c)
 *     BgMarkHiberPhase @ 0x1406D9548 (BgMarkHiberPhase.c)
 *     BgDisplayFade @ 0x1406D97F4 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x1406D9BB4 (BgConsoleGetInterface.c)
 *     ResFwBackgroundTransition @ 0x1406D9C2C (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1406D9C6C (ResFwpPageInBackground.c)
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 *     AnFwFadeCompletion @ 0x1406DAE6C (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1406DAF40 (AnFwpFadeAnimationTimer.c)
 *     BgDisplayProgressIndicator @ 0x1406DB274 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1406DB2A8 (AnFwpProgressIndicatorTimer.c)
 *     ResFwpPageOutBackground @ 0x1406DB9AC (ResFwpPageOutBackground.c)
 *     BgpConsoleInitialize @ 0x1406DC398 (BgpConsoleInitialize.c)
 *     BgLibraryDisable @ 0x1406DC66C (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1406DC6E8 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x1406DCA64 (BgDisplayBackgroundUpdate.c)
 *     BgReleaseSpinLock @ 0x1406DCAC0 (BgReleaseSpinLock.c)
 *     BgDisplayString @ 0x1406DE244 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1406DE2B0 (BgLibraryDestroy.c)
 *     BgpConsoleClearScreen @ 0x1406DE320 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x1406DE3C8 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1406DE7D4 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x1406DE934 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x1406DE980 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x1406DEBDC (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x1406DEC7C (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1406DF258 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

void BgpFwReleaseLock()
{
  unsigned __int8 v0; // bl

  if ( (dword_1402D4BB0 & 0xC00) != 0xC00 )
  {
    v0 = byte_140306618;
    KxReleaseSpinLock(&qword_140319ED0);
    if ( v0 <= 2u )
      __writecr8(v0);
  }
}
