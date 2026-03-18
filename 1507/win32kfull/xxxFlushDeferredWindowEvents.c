/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C004FB28
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C000A564 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzEnableDwmPointerSupport @ 0x1C003E1F8 (zzzEnableDwmPointerSupport.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0043DB0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     NtUserSetImeOwnerWindow @ 0x1C004FBC0 (NtUserSetImeOwnerWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxCreateCaret @ 0x1C0077AD0 (xxxCreateCaret.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     zzzCancelJournalling @ 0x1C00FEE88 (zzzCancelJournalling.c)
 *     zzzShowCursor @ 0x1C0100BA0 (zzzShowCursor.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C010471C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     xxxDwmStopRedirection @ 0x1C012B6A0 (xxxDwmStopRedirection.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 *     xxxHardErrorControl @ 0x1C0226550 (xxxHardErrorControl.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C0071500 (xxxProcessNotifyWinEvent.c)
 */

HANDLE xxxFlushDeferredWindowEvents()
{
  HANDLE result; // rax
  int v1; // ebx
  struct tagNOTIFY **i; // rcx
  int v3; // edx

  result = PsGetCurrentThreadId();
  v1 = (int)result;
LABEL_2:
  for ( i = gpPendingNotifies; i; i = (struct tagNOTIFY **)*i )
  {
    v3 = *((_DWORD *)i + 12);
    if ( (v3 & 2) != 0 && *((_DWORD *)i + 10) == v1 )
    {
      *((_DWORD *)i + 12) = v3 & 0xFFFFFFFD;
      result = (HANDLE)xxxProcessNotifyWinEvent();
      goto LABEL_2;
    }
  }
  return result;
}
