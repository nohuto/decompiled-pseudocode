/*
 * XREFs of ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0031D10
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006C980 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00C25A0 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00C2740 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00C7020 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00CA318 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall PDEVOBJ::vReferencePdev(PDEVOBJ *this)
{
  HSEMAPHORE v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = ghsemDriverMgmt;
  EngAcquireSemaphore(ghsemDriverMgmt);
  ++*(_DWORD *)(*(_QWORD *)this + 32LL);
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
}
