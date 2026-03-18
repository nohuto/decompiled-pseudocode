/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C
 * Callers:
 *     GreSetBitmapOwnerEx @ 0x1C00346C8 (GreSetBitmapOwnerEx.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     EngLockSurface @ 0x1C0075140 (EngLockSurface.c)
 *     EngModifySurface @ 0x1C007A100 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C007ABA0 (EngAssociateSurface.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB930 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCBE8 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCCC4 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00BCF68 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
