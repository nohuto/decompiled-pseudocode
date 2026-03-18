/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B990 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002C0A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     GreLockDwmState @ 0x1C0037340 (GreLockDwmState.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0037900 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0037AA0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0037B20 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     GreLockVisRgnPublish @ 0x1C0039040 (GreLockVisRgnPublish.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     DrvGetHDEV @ 0x1C0043760 (DrvGetHDEV.c)
 *     GreLockDisplayDevice @ 0x1C00459D0 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0045A00 (GreLockSprite.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004CA04 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvEnumDisplaySettings @ 0x1C0050C50 (DrvEnumDisplaySettings.c)
 *     sub_1C0053ED0 @ 0x1C0053ED0 (sub_1C0053ED0.c)
 *     sub_1C0054204 @ 0x1C0054204 (sub_1C0054204.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0056AE4 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0057A30 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C0057AB4 (DrvDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x1C0057B68 (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0057DC0 (DrvDisableMDEV.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ldevUnloadImage @ 0x1C005C300 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C005C400 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C005CC50 (ldevLoadInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005D854 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0070EB0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00767B0 (DrvCleanupAndDestroyMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077EF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007BBC0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C007D7C0 (DrvInitializeDxgkrnlDpiCache.c)
 *     GreLockPointer @ 0x1C007E670 (GreLockPointer.c)
 *     GreLockDynamicModeChange @ 0x1C007EE90 (GreLockDynamicModeChange.c)
 *     GreSfmDwmShutdown @ 0x1C007F6F0 (GreSfmDwmShutdown.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0087564 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvEscapeRemoteDrivers @ 0x1C0087CA0 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C0087E50 (HDXDrvEscape.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0087F68 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B3CF0 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B4824 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00BA990 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB414 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB784 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00BC7B0 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00BC9C0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BCE70 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00BD2D0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C00BF270 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C00BF9B0 (EngDeleteDriverObj.c)
 * Callees:
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreExclusive(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pqz(a1, a2, a3, a2, a3, a1);
  }
  return result;
}
