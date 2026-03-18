/*
 * XREFs of PALLOCMEM2 @ 0x1C0037A4C
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0016160 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00163D0 (DrvUpdateGraphicsDeviceList.c)
 *     HmgAllocateDcAttr @ 0x1C002498C (HmgAllocateDcAttr.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D064 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00310F0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     HmgFreeDcAttr @ 0x1C0034278 (HmgFreeDcAttr.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0037320 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplayDevices @ 0x1C00399E0 (DrvEnumDisplayDevices.c)
 *     newpathalloc @ 0x1C0047CF0 (newpathalloc.c)
 *     HmgCreate @ 0x1C00533A4 (HmgCreate.c)
 *     HmgFreeObjectAttr @ 0x1C005AF54 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C005BDE0 (HmgAllocateObjectAttr.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C005E9D8 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C005F3FC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C005F930 (UpdateMonitorDevices.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C00601F0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C0060CC0 (DrvBuildDevmodeList.c)
 *     DrvChangeDisplaySettings @ 0x1C0062064 (DrvChangeDisplaySettings.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C006277C (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvEnumDisplaySettings @ 0x1C0062AF0 (DrvEnumDisplaySettings.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0064748 (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     LogDiagSDC @ 0x1C0064918 (LogDiagSDC.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0064B48 (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0064CA0 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0065330 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0066F10 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0068408 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvGetDisplayDriverNames @ 0x1C00691C0 (DrvGetDisplayDriverNames.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0069B4C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     ldevLoadImage @ 0x1C006C610 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C006C850 (MakeSystemRelativePath.c)
 *     ldevLoadInternal @ 0x1C006CAC0 (ldevLoadInternal.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C006E0BC (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C006E198 (-GetLanguageID@@YAGXZ.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0071C68 (GreSfmCleanupPresentHistory.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00747D8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0081160 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0081A50 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C0082E80 (NtGdiPolyPolyDraw.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0083F00 (DrvCreatePhysicalMonitorObjects.c)
 *     ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C0085AF0 (-GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00871CC (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C0087894 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvWaitForMonitorProcessing @ 0x1C0088840 (DrvWaitForMonitorProcessing.c)
 *     DrvInitConsole @ 0x1C0089470 (DrvInitConsole.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C008A260 (DrvSetDisplayConfigValidateParams.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00BD180 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00BE240 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00C064C (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C06FC (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00C0798 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00C4890 (NtHWCursorUpdatePointer.c)
 *     ?CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00C57E4 (-CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00C960C (DrvProcessSetDisplayConfigParameters.c)
 *     DrvSetVideoParameters @ 0x1C00C9B90 (DrvSetVideoParameters.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CBEC0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     MakeSystemDriversRelativePath @ 0x1C00CD638 (MakeSystemDriversRelativePath.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void *__fastcall PALLOCMEM2(size_t Size, __int64 a2, int a3)
{
  void *v3; // rbx
  size_t v4; // rdi

  v3 = 0LL;
  v4 = (unsigned int)Size;
  if ( (_DWORD)Size )
  {
    if ( (int)IsWin32AllocPoolImplSupported_0() >= 0 )
      v3 = (void *)Win32AllocPoolImpl_0();
    if ( v3 && a3 )
      memset(v3, 0, v4);
  }
  return v3;
}
