/*
 * XREFs of ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C00058D4 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C000A6E8 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreConvertMemToRedirectionDC @ 0x1C000B03C (GreConvertMemToRedirectionDC.c)
 *     GreGetSpriteAttributes @ 0x1C000BC90 (GreGetSpriteAttributes.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C000D620 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C000EE5C (GreDwmNotifySpriteDPIChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C000F7F4 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00101F8 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C00103A0 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     GreSetBitmapBits @ 0x1C0010850 (GreSetBitmapBits.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     NtGdiGetDCforBitmap @ 0x1C0012DC0 (NtGdiGetDCforBitmap.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0012E08 (GreBeginGdiRenderingToDxSurface.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C0012FE8 (GreEndGdiRenderingToDxSurface.c)
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0016C2C (--1DCOBJA@@QEAA@XZ.c)
 *     GreHintDCWnd @ 0x1C0016C90 (GreHintDCWnd.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreDrawStream @ 0x1C0026AD0 (GreDrawStream.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E5208 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreForceClipRgnChange @ 0x1C00FA7B4 (GreForceClipRgnChange.c)
 *     GreGetSprite @ 0x1C00FE75C (GreGetSprite.c)
 *     DxgkEngGetClientRect @ 0x1C0100E10 (DxgkEngGetClientRect.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0260028 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026056C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02611B8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0262414 (GreDeleteSpriteDelayDelete.c)
 *     GreGetDxRgn @ 0x1C0262720 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 *     GreProtectSpriteContent @ 0x1C0262FA8 (GreProtectSpriteContent.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0263F30 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0264180 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0264C50 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0264D10 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C02919F8 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293EA0 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return PopThreadGuardedObject(a1, a2, a3, a4);
}
