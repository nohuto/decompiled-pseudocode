/*
 * XREFs of ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0035B84 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0035D30 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00380C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C004562C (-vRemoveRefPalettes@@YAXK@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0045860 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     bDeletePalette @ 0x1C004B470 (bDeletePalette.c)
 *     pConvertDfbSurfaceToDib2 @ 0x1C005B100 (pConvertDfbSurfaceToDib2.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C005CB10 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     freepathalloc @ 0x1C0070450 (freepathalloc.c)
 *     newpathalloc @ 0x1C00704B0 (newpathalloc.c)
 *     ulIndexToRGB @ 0x1C007BE90 (ulIndexToRGB.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0088A64 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00BE728 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 *     GreSetMagicColors @ 0x1C00BE85C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJ::vUnlock(SEMOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", *(_QWORD *)this, a3);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v4);
    }
    *(_QWORD *)this = 0LL;
  }
}
