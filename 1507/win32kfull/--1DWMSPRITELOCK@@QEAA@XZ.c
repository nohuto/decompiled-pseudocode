/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78
 * Callers:
 *     GreGetSpriteAttributes @ 0x1C000BC90 (GreGetSpriteAttributes.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C000EE5C (GreDwmNotifySpriteDPIChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C000F7F4 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C0010648 (GreZorderSprite.c)
 *     GrePtInSprite @ 0x1C0012198 (GrePtInSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0012480 (vCleanupUMWindowlessSprite.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C003DF80 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C003E020 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C003E100 (GreDwmHasSoftwareCursor.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C00F015C (GreDwmGetSurfaceData.c)
 *     GreForceClipRgnChange @ 0x1C00FA7B4 (GreForceClipRgnChange.c)
 *     GreGetSprite @ 0x1C00FE75C (GreGetSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026109C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0262414 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C02625BC (GreDwmGetRedirectionStyle.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 *     GreProtectSpriteContent @ 0x1C0262FA8 (GreProtectSpriteContent.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
}
