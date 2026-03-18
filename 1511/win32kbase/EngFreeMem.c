/*
 * XREFs of EngFreeMem @ 0x1C0059DF0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0059CD4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B70F0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B7130 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00B7210 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C00BF7F0 (EngDeleteClip.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C0059E20 (MultiUserGreTrackRemoveEngResource.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  if ( pv )
  {
    MultiUserGreTrackRemoveEngResource((char *)pv - 32);
    Win32FreePool();
  }
}
