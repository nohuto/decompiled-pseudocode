/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C00A7A9C
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0094A9C (zzzEnableDwmPointerSupport.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetImeOwnerWindow @ 0x1C00A7C60 (NtUserSetImeOwnerWindow.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00DBE68 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     xxxCreateCaret @ 0x1C0122D94 (xxxCreateCaret.c)
 *     zzzShowCursor @ 0x1C0132E80 (zzzShowCursor.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0139054 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C0226628 (xxxHardErrorControl.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C0085350 (xxxProcessNotifyWinEvent.c)
 */

HANDLE xxxFlushDeferredWindowEvents()
{
  HANDLE result; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ebx
  struct tagNOTIFY **i; // rcx
  int v5; // edx
  __int64 v6; // rdx

  result = PsGetCurrentThreadId();
  v3 = (int)result;
LABEL_2:
  for ( i = gpPendingNotifies; i; i = (struct tagNOTIFY **)*i )
  {
    v5 = *((_DWORD *)i + 12);
    if ( (v5 & 2) != 0 && *((_DWORD *)i + 10) == v3 )
    {
      v6 = v5 & 0xFFFFFFFD;
      *((_DWORD *)i + 12) = v6;
      result = (HANDLE)xxxProcessNotifyWinEvent((LARGE_INTEGER)i, v6, v1, v2).QuadPart;
      goto LABEL_2;
    }
  }
  return result;
}
