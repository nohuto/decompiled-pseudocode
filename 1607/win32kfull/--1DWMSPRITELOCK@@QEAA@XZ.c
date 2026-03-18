/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0
 * Callers:
 *     GrePtInSprite @ 0x1C0052EA4 (GrePtInSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0053150 (vCleanupUMWindowlessSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0061C18 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C0062450 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C0062B5C (GreZorderSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0062D14 (GreDwmNotifySpriteDPIChange.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C0065674 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0065D0C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0094780 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C0094860 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C0094D68 (GreDwmHasSoftwareCursor.c)
 *     GreDwmGetSurfaceData @ 0x1C0115708 (GreDwmGetSurfaceData.c)
 *     GreGetSpriteAttributes @ 0x1C011CEA8 (GreGetSpriteAttributes.c)
 *     GreForceClipRgnChange @ 0x1C01242C0 (GreForceClipRgnChange.c)
 *     GreGetSprite @ 0x1C012D374 (GreGetSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025D0AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025D65C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C025E564 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C025E70C (GreDwmGetRedirectionStyle.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 *     GreProtectSpriteContent @ 0x1C025F0F4 (GreProtectSpriteContent.c)
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
