/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0006F58 (GreCreateBitmapFromDxSurface.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C00088A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0027674 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0027798 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0031BA0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     vCleanupUMWindowlessSprite @ 0x1C004C550 (vCleanupUMWindowlessSprite.c)
 *     GreAccNotifyWindow @ 0x1C007C680 (GreAccNotifyWindow.c)
 *     GreGetBitmapBits @ 0x1C007C7AC (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C007CAF0 (GreSetBitmapBits.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C007F000 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C007FA78 (GreSetRedirectionSurfaceSignaling.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C0096BA8 (GreLddmProcessDesktopSwitch.c)
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00C98FC (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00DB300 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C00E3C40 (GreSetDeviceGammaRamp.c)
 *     GreGetDeviceGammaRamp @ 0x1C00E4224 (GreGetDeviceGammaRamp.c)
 *     GreRealizeDefaultPalette @ 0x1C010CB04 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C010FA9C (GreGetSystemPaletteUse.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 *     GreRealizePalette @ 0x1C013C7E0 (GreRealizePalette.c)
 *     GreCreateDIBitmapComp @ 0x1C014B9F0 (GreCreateDIBitmapComp.c)
 *     NtGdiGetMonitorID @ 0x1C025E520 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FD98 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FEA8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreGetDxRgn @ 0x1C0260F50 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C02612F0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0261404 (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C026152C (GreHintDxUpdate.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0261C2C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0261F44 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x1C0263768 (GreDxDwmShutdown.c)
 *     GreCreateHalftonePalette @ 0x1C02B1138 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B12A0 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B159C (GreSetSystemPaletteUse.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B42D8 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02B8130 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02B81B8 (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
}
