/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C000CB80 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C000F250 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreLockVisRgnPublish @ 0x1C0010DF0 (GreLockVisRgnPublish.c)
 *     GreLockPointer @ 0x1C0019780 (GreLockPointer.c)
 *     GreLockDynamicModeChange @ 0x1C0019820 (GreLockDynamicModeChange.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C001F0AC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvEnumDisplaySettings @ 0x1C0022200 (DrvEnumDisplaySettings.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0027140 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0027848 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0033210 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0033AC0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0033B40 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B964 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     DrvGetHDEV @ 0x1C0053C00 (DrvGetHDEV.c)
 *     GreGetDeviceCaps @ 0x1C0056DB0 (GreGetDeviceCaps.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ldevUnloadImage @ 0x1C005E930 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C005EA30 (ldevLoadDriver.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0061290 (DrvNotifyModeChangeStartStop.c)
 *     GreLockDisplayDevice @ 0x1C0061430 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0061460 (GreLockSprite.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0063C00 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0064BB0 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C0064C34 (DrvDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x1C0064CE8 (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0064F40 (DrvDisableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0066760 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C006D598 (DrvCleanupAndDestroyMDEV.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C006F8F0 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     GreSfmDwmShutdown @ 0x1C00708F0 (GreSfmDwmShutdown.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00787B0 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C0078960 (HDXDrvEscape.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0078A78 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ldevLoadInternal @ 0x1C007EA70 (ldevLoadInternal.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0081BD0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C00835F0 (DrvInitializeDxgkrnlDpiCache.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B02CC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B0E84 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00B8A80 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00B8D18 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9A00 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9D70 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00BAF80 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00BB190 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BB640 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00BBAA0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C00BDB00 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C00BE530 (EngDeleteDriverObj.c)
 * Callees:
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
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
