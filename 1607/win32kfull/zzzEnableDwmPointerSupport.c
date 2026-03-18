/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C0094A9C
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     SetPointerMetaVisibility @ 0x1C009409C (SetPointerMetaVisibility.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 * Callees:
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C0094860 (GreDwmEnableSoftwareCursorRendering.c)
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     GreDwmHasSoftwareCursor @ 0x1C0094D68 (GreDwmHasSoftwareCursor.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
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
        zzzInternalSetCursorPos(*(unsigned int *)(gpsi + 5368LL), *(unsigned int *)(gpsi + 5372LL), 2LL);
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
