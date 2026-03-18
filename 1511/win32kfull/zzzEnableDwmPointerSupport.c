/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C0096CD8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     SetPointerMetaVisibility @ 0x1C0098764 (SetPointerMetaVisibility.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 *     GreDwmHasSoftwareCursor @ 0x1C0096FE4 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00970B4 (GreDwmEnableSoftwareCursorRendering.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzEnableDwmPointerSupport(unsigned int a1, int a2)
{
  int HasSoftwareCursor; // eax
  __int64 v5; // rcx
  int v6; // edi
  __int64 result; // rax

  ++gdwDeferWinEvent;
  GreLockVisRgn(*gpDispInfo);
  GreLockPointer(*gpDispInfo);
  GreLockSprite(*gpDispInfo);
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*gpDispInfo, 0LL);
  if ( !a2 || HasSoftwareCursor || a1 )
  {
    if ( HasSoftwareCursor == a1 )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      SetPointer(0LL);
      gbForceSoftwareCursor = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5, a1);
    if ( v6 )
    {
      gbForceSoftwareCursor = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !a2 )
        zzzInternalSetCursorPos(*(unsigned int *)(gpsi + 3976LL), *(unsigned int *)(gpsi + 3980LL), 2LL);
    }
  }
  GreUnlockSprite(*gpDispInfo);
  GreUnlockPointer(*gpDispInfo);
  GreUnlockVisRgn(*gpDispInfo);
  result = gdwDeferWinEvent;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      return xxxFlushDeferredWindowEvents();
  }
  return result;
}
