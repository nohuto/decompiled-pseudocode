/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0
 * Callers:
 *     GreGetSpriteAttributes @ 0x1C000BC90 (GreGetSpriteAttributes.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C000EE5C (GreDwmNotifySpriteDPIChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C000F7F4 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C0010648 (GreZorderSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0012480 (vCleanupUMWindowlessSprite.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C003DF80 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C003E020 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C003E100 (GreDwmHasSoftwareCursor.c)
 *     GreForceClipRgnChange @ 0x1C00FA7B4 (GreForceClipRgnChange.c)
 *     GreGetSprite @ 0x1C00FE75C (GreGetSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026109C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0262414 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C0262FA8 (GreProtectSpriteContent.c)
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
