/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C00907F4
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C008BAD4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0090110 (NtUserSetImeOwnerWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0096CD8 (zzzEnableDwmPointerSupport.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateCaret @ 0x1C00C6E54 (xxxCreateCaret.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     xxxDwmStopRedirection @ 0x1C00D3E60 (xxxDwmStopRedirection.c)
 *     xxxCreateWindowStation @ 0x1C00D6334 (xxxCreateWindowStation.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 *     zzzShowCursor @ 0x1C0111C50 (zzzShowCursor.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012F714 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C02268E8 (xxxHardErrorControl.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C0060EC0 (xxxProcessNotifyWinEvent.c)
 */

__int64 xxxFlushDeferredWindowEvents()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ebx
  struct tagNOTIFY **i; // rcx
  int v5; // edx
  __int64 v6; // rdx

  result = (__int64)PsGetCurrentThreadId();
  v3 = result;
LABEL_2:
  for ( i = gpPendingNotifies; i; i = (struct tagNOTIFY **)*i )
  {
    v5 = *((_DWORD *)i + 12);
    if ( (v5 & 2) != 0 && *((_DWORD *)i + 10) == v3 )
    {
      v6 = v5 & 0xFFFFFFFD;
      *((_DWORD *)i + 12) = v6;
      result = xxxProcessNotifyWinEvent((unsigned __int64)i, v6, v1, v2);
      goto LABEL_2;
    }
  }
  return result;
}
