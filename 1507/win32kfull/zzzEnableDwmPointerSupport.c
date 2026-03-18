/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C003E1F8
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C003A54C (SetPointerMetaVisibility.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C0149B0C (zzzDwmStartRedirection.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 * Callees:
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C003DF80 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C003E100 (GreDwmHasSoftwareCursor.c)
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
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
    GreDwmEnableSoftwareCursorRendering(v5, (struct PDEVOBJ *)a1);
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
