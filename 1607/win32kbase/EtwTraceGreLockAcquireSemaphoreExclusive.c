/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0
 * Callers:
 *     GreLockDwmState @ 0x1C001D890 (GreLockDwmState.c)
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002F4A0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002F9BC (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C003A3B0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004A498 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreSfmDwmShutdown @ 0x1C004EBB0 (GreSfmDwmShutdown.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005C034 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0062AF0 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C0063040 (DrvGetHDEV.c)
 *     ApplyPathsModality @ 0x1C0065594 (ApplyPathsModality.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0065808 (DrvNotifyModeChangeStartStop.c)
 *     GreLockDisplayDevice @ 0x1C0065B60 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0065B90 (GreLockSprite.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0068320 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00692C0 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C0069344 (DrvDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x1C00693F8 (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0069650 (DrvDisableMDEV.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ldevUnloadImage @ 0x1C006C2D0 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C006C3D0 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C006CAC0 (ldevLoadInternal.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C006CE28 (DrvCleanupAndDestroyMDEV.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0075050 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00750D0 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0075850 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreLockVisRgnPublish @ 0x1C00778D0 (GreLockVisRgnPublish.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007DF10 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C007E4B8 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C0080FD0 (DrvInitializeDxgkrnlDpiCache.c)
 *     GreLockPointer @ 0x1C0082290 (GreLockPointer.c)
 *     GreLockDynamicModeChange @ 0x1C00826D0 (GreLockDynamicModeChange.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0088628 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvEscapeRemoteDrivers @ 0x1C0088D80 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C0088F30 (HDXDrvEscape.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0089048 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00BE240 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00BEDE4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00C6660 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7118 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7488 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00C8484 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00C8690 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00C8B60 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00C8FA0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C00CAF90 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C00CBCF0 (EngDeleteDriverObj.c)
 * Callees:
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
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
