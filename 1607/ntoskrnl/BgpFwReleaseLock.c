/*
 * XREFs of BgpFwReleaseLock @ 0x140127764
 * Callers:
 *     BgLibraryEnable @ 0x140126F20 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x1401276A4 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14012A060 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1401D4E7C (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 *     BgFreeContext @ 0x140725010 (BgFreeContext.c)
 *     BgGetContext @ 0x1407251F0 (BgGetContext.c)
 *     BgMarkHiberPhase @ 0x14072537C (BgMarkHiberPhase.c)
 *     BgDisplayFade @ 0x140725814 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x140725A90 (BgConsoleGetInterface.c)
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x140725B0C (ResFwpPageInBackground.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 *     AnFwFadeCompletion @ 0x140726D9C (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140726E84 (AnFwpFadeAnimationTimer.c)
 *     BgDisplayProgressIndicator @ 0x1407271A4 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407271D8 (AnFwpProgressIndicatorTimer.c)
 *     ResFwpPageOutBackground @ 0x140727A6C (ResFwpPageOutBackground.c)
 *     BgpConsoleInitialize @ 0x140728460 (BgpConsoleInitialize.c)
 *     BgLibraryDisable @ 0x14072873C (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1407287B8 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x140728B50 (BgDisplayBackgroundUpdate.c)
 *     BgReleaseSpinLock @ 0x140728BAC (BgReleaseSpinLock.c)
 *     BgDisplayString @ 0x14072A240 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14072A2C4 (BgLibraryDestroy.c)
 *     BgpConsoleClearScreen @ 0x14072A334 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x14072A3E8 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x14072A77C (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x14072A8DC (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x14072A944 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x14072ABBC (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x14072AC58 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x14072ACB4 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 */

void BgpFwReleaseLock()
{
  unsigned __int8 v0; // bl

  if ( (dword_1402F9F90 & 0xC00) != 0xC00 )
  {
    v0 = byte_140328BAC;
    KxReleaseSpinLock(&qword_14033DB90);
    if ( v0 <= 2u )
      __writecr8(v0);
  }
}
