/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C003A914
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C000C2C0 (GreCreatePatternBrushInternal.c)
 *     EngModifySurface @ 0x1C0011F30 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00148A0 (EngAssociateSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00346E0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0035490 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005BE14 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     bDeleteSurface @ 0x1C005C5B0 (bDeleteSurface.c)
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00AF0D0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00AF20C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B0BA0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF450 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitBMOBJ @ 0x1C0137ECC (bInitBMOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    HmgDecrementShareReferenceCount(v2);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(this);
}
