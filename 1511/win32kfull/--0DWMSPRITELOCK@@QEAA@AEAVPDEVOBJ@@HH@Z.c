/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4
 * Callers:
 *     GreZorderSprite @ 0x1C003C468 (GreZorderSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C004C550 (vCleanupUMWindowlessSprite.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004EF40 (GreUpdateSpriteVisRgn.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0079A6C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C007AC30 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C007B994 (GreHintSpriteShape.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C007BE74 (GreDwmNotifySpriteDPIChange.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreGetSpriteAttributes @ 0x1C007F8F0 (GreGetSpriteAttributes.c)
 *     GreDwmHasSoftwareCursor @ 0x1C0096FE4 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00970B4 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0097230 (DwmDestroyDeviceSpecificResources.c)
 *     GreForceClipRgnChange @ 0x1C0103A50 (GreForceClipRgnChange.c)
 *     GreGetSprite @ 0x1C0109EFC (GreGetSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FD98 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0260C74 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C02617A8 (GreProtectSpriteContent.c)
 * Callees:
 *     <none>
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, int a3, int a4)
{
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax

  *(_DWORD *)this = 0;
  if ( !a3 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread
      || (v7 = *ThreadWin32Thread) == 0
      || a4 == 1
      || !*(_DWORD *)(v7 + 104) && !*(_DWORD *)(v7 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
