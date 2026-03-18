/*
 * XREFs of GreReleaseSemaphoreInternal @ 0x1C0037280
 * Callers:
 *     MultiUserGreTrackAddEngResource @ 0x1C0012430 (MultiUserGreTrackAddEngResource.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B990 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreUnlockDwmState @ 0x1C0037310 (GreUnlockDwmState.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C00378D0 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0037A60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     GreUnlockVisRgnPublish @ 0x1C0039010 (GreUnlockVisRgnPublish.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     DrvGetHDEV @ 0x1C0043760 (DrvGetHDEV.c)
 *     GreUnlockSprite @ 0x1C0045960 (GreUnlockSprite.c)
 *     GreUnlockDisplayDevice @ 0x1C0045990 (GreUnlockDisplayDevice.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C004C180 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004CA04 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreSfmOpenTokenEvent @ 0x1C004E600 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C004E6F0 (GreSfmGetNotificationTokens.c)
 *     DrvEnumDisplaySettings @ 0x1C0050C50 (DrvEnumDisplaySettings.c)
 *     sub_1C0053ED0 @ 0x1C0053ED0 (sub_1C0053ED0.c)
 *     sub_1C0054204 @ 0x1C0054204 (sub_1C0054204.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0055628 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0056C9C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDestroyMDEV @ 0x1C0057AB4 (DrvDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x1C0057B68 (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0057DC0 (DrvDisableMDEV.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C0059E20 (MultiUserGreTrackRemoveEngResource.c)
 *     ldevUnloadImage @ 0x1C005C300 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C005C400 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C005CC50 (ldevLoadInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005D854 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0070EB0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00767B0 (DrvCleanupAndDestroyMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077EF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C0079F30 (-DxgkEngVisRgnUniq@@YAIXZ.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007C590 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C007D7C0 (DrvInitializeDxgkrnlDpiCache.c)
 *     GreUnlockPointer @ 0x1C007E9E0 (GreUnlockPointer.c)
 *     GreUnlockDynamicModeChange @ 0x1C007F060 (GreUnlockDynamicModeChange.c)
 *     GreSfmDwmShutdown @ 0x1C007F6F0 (GreSfmDwmShutdown.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0087564 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvEscapeRemoteDrivers @ 0x1C0087CA0 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C0087E50 (HDXDrvEscape.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0088100 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00B3454 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B3CF0 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B4824 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     DxEngUnlockShareSem @ 0x1C00B87B0 (DxEngUnlockShareSem.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00BA990 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB414 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB784 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00BC7B0 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00BC9C0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BCE70 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00BD2D0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C00BF2E0 (GreUnlockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C00BF9B0 (EngDeleteDriverObj.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReleaseSemaphoreInternal(struct _ERESOURCE *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(a1);
    return PsLeavePriorityRegion(v1);
  }
  return result;
}
