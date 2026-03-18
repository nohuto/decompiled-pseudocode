/*
 * XREFs of EngFreeMem @ 0x1C006A170
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006A050 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C2620 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C2660 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00C2740 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C00CBA70 (EngDeleteClip.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C006A1A0 (MultiUserGreTrackRemoveEngResource.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  if ( pv )
  {
    MultiUserGreTrackRemoveEngResource((char *)pv - 32);
    Win32FreePool();
  }
}
