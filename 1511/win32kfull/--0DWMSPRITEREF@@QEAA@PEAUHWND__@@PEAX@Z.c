/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C007C188
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0079A6C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C007BE74 (GreDwmNotifySpriteDPIChange.c)
 *     GreGetSpriteAttributes @ 0x1C007F8F0 (GreGetSpriteAttributes.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FEA8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0260C74 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C003BEAC (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C007C164 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2, HSPRITE a3)
{
  *(_QWORD *)this = 0LL;
  if ( a2 )
    a3 = (HSPRITE)DWMSPRITEREF::hspLookupWindow(a2);
  if ( a3 )
    DWMSPRITEREF::LockSpriteObj(this, a3);
  return this;
}
