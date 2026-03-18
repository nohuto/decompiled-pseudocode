/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0007B20 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C0009B98 (GreCreateBitmapFromDxSurface.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0009DB0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0044F30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0049F00 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004AC50 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004AD74 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0053150 (vCleanupUMWindowlessSprite.c)
 *     GreAccNotifyWindow @ 0x1C0064D68 (GreAccNotifyWindow.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C0094E38 (GreLddmProcessDesktopSwitch.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B39E8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 *     GreGetBitmapBits @ 0x1C00FBF74 (GreGetBitmapBits.c)
 *     GreRealizeDefaultPalette @ 0x1C01008B0 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0100A04 (GreGetSystemPaletteUse.c)
 *     GreGetDeviceGammaRamp @ 0x1C01076E4 (GreGetDeviceGammaRamp.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0118D70 (GreSetRedirectionSurfaceSignaling.c)
 *     GreRealizePalette @ 0x1C01458E0 (GreRealizePalette.c)
 *     GreCreateDIBitmapComp @ 0x1C0151D78 (GreCreateDIBitmapComp.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025B244 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     NtGdiGetMonitorID @ 0x1C025BCA0 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025D0AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025D65C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025D778 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C025EC34 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C025ED3C (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C025F5F0 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C025F908 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0260390 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C02612B8 (GreDxDwmShutdown.c)
 *     GreCreateHalftonePalette @ 0x1C02B3FD4 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B4130 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B443C (GreSetSystemPaletteUse.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B742C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02BB344 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02BB3D0 (GreSetBitmapDimension.c)
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
