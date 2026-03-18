/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003FD8 (GreCreateBitmapFromDxSurface.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C000B994 (GreSetRedirectionSurfaceSignaling.c)
 *     GreAccNotifyWindow @ 0x1C000E4BC (GreAccNotifyWindow.c)
 *     GreGetBitmapBits @ 0x1C000EBCC (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C0010850 (GreSetBitmapBits.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0012480 (vCleanupUMWindowlessSprite.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C001A330 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001CF44 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001D324 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C003E4CC (GreLddmProcessDesktopSwitch.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C007B930 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C007B9EC (GreGetSystemPaletteUse.c)
 *     GreCreateDIBitmapReal @ 0x1C0098254 (GreCreateDIBitmapReal.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00D6F80 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EAC10 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreRealizePalette @ 0x1C0111C40 (GreRealizePalette.c)
 *     GreCreateDIBitmapComp @ 0x1C0121C2C (GreCreateDIBitmapComp.c)
 *     GreGetDeviceGammaRamp @ 0x1C012D754 (GreGetDeviceGammaRamp.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025E2C0 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     NtGdiGetMonitorID @ 0x1C025ED50 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026109C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02611B8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreGetDxRgn @ 0x1C0262720 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0262AE4 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0262BEC (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C026349C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02637B4 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x1C0264F18 (GreDxDwmShutdown.c)
 *     GreCreateHalftonePalette @ 0x1C02B1EB0 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B2010 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B2310 (GreSetSystemPaletteUse.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B5338 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02B8D1C (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02B8DA8 (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
