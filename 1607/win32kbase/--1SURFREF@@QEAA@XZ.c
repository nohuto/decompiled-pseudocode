/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0031D40 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032B30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005A02C (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1C005B700 (GreCreatePatternBrushInternal.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 *     EngModifySurface @ 0x1C007A100 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C007ABA0 (EngAssociateSurface.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00BD180 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00BD2BC (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB930 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCBE8 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00CCEBC (--1SURFREFGC@@QEAA@XZ.c)
 *     bInitBMOBJ @ 0x1C0156878 (bInitBMOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    HmgDecrementShareReferenceCount(v2);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(this);
}
