/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C
 * Callers:
 *     GrePtInSprite @ 0x1C003BB90 (GrePtInSprite.c)
 *     GreZorderSprite @ 0x1C003C468 (GreZorderSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C004C550 (vCleanupUMWindowlessSprite.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004EF40 (GreUpdateSpriteVisRgn.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0079A6C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C007AC30 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C007B994 (GreHintSpriteShape.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C007BE74 (GreDwmNotifySpriteDPIChange.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreDwmGetSurfaceData @ 0x1C007E0CC (GreDwmGetSurfaceData.c)
 *     GreGetSpriteAttributes @ 0x1C007F8F0 (GreGetSpriteAttributes.c)
 *     GreDwmHasSoftwareCursor @ 0x1C0096FE4 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00970B4 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0097230 (DwmDestroyDeviceSpecificResources.c)
 *     GreForceClipRgnChange @ 0x1C0103A50 (GreForceClipRgnChange.c)
 *     GreGetSprite @ 0x1C0109EFC (GreGetSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FD98 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0260C74 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0260DEC (GreDwmGetRedirectionStyle.c)
 *     GreHintDxUpdate @ 0x1C026152C (GreHintDxUpdate.c)
 *     GreProtectSpriteContent @ 0x1C02617A8 (GreProtectSpriteContent.c)
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
