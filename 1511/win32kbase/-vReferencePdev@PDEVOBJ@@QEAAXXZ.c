/*
 * XREFs of ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00380C0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C0059E84 (bDynamicModeChange.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C005CB10 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00B7070 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00B7210 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00BB31C (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00BE728 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall PDEVOBJ::vReferencePdev(PDEVOBJ *this)
{
  PERESOURCE v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = ghsemDriverMgmt;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  ++*(_DWORD *)(*(_QWORD *)this + 32LL);
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
}
