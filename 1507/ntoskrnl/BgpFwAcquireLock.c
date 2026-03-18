/*
 * XREFs of BgpFwAcquireLock @ 0x140150298
 * Callers:
 *     BgLibraryEnable @ 0x14014C8C8 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x1401501E4 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140152BA8 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140202A44 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140202B60 (KiDisplayBlueScreen.c)
 *     BgFreeContext @ 0x14075C000 (BgFreeContext.c)
 *     BgGetContext @ 0x14075C3A8 (BgGetContext.c)
 *     BgMarkHiberPhase @ 0x14075C534 (BgMarkHiberPhase.c)
 *     BgDisplayFade @ 0x14075C83C (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14075CBFC (BgConsoleGetInterface.c)
 *     ResFwBackgroundTransition @ 0x14075CC74 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x14075CCB4 (ResFwpPageInBackground.c)
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 *     AnFwFadeCompletion @ 0x14075DEB4 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14075DF88 (AnFwpFadeAnimationTimer.c)
 *     BgDisplayProgressIndicator @ 0x14075E2BC (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x14075E2F0 (AnFwpProgressIndicatorTimer.c)
 *     ResFwpPageOutBackground @ 0x14075E9F4 (ResFwpPageOutBackground.c)
 *     BgpConsoleInitialize @ 0x14075F3E0 (BgpConsoleInitialize.c)
 *     BgLibraryDisable @ 0x14075F6B4 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x14075F730 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x14075FAAC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayString @ 0x1407612C4 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x140761330 (BgLibraryDestroy.c)
 *     BgpConsoleClearScreen @ 0x14076139C (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140761444 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140761850 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x1407619B0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x1407619FC (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140761C58 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140761CF8 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1407622D4 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

__int64 BgpFwAcquireLock()
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  result = dword_140323CF0 & 0xC00;
  if ( (_DWORD)result != 3072 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( 1 )
      {
        result = qword_1403532A0;
        if ( !qword_1403532A0 )
          break;
        _mm_pause();
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      result = KiAcquireSpinLockInstrumented(&qword_1403532A0);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403532A0, 0LL) )
    {
      result = KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_1403532A0);
    }
    byte_140356918 = CurrentIrql;
  }
  return result;
}
