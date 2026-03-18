/*
 * XREFs of ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C
 * Callers:
 *     GreUnlockDisplayArea @ 0x1C00099CC (GreUnlockDisplayArea.c)
 *     GrePtInSprite @ 0x1C0012198 (GrePtInSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0012480 (vCleanupUMWindowlessSprite.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00206C4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C008A328 (GreDeleteSpriteOverlapPresent.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C008A480 (GreRedrawSpriteOverlapPresent.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C008A574 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     GreSetPointer @ 0x1C00913EC (GreSetPointer.c)
 *     GreDwmGetSurfaceData @ 0x1C00F015C (GreDwmGetSurfaceData.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F4F24 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C01319F4 (GreDwmCreatedBitmapRemotingOutput.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014C4D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C014CDD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C0152B5C (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     EngpMovePointer @ 0x1C02621C4 (EngpMovePointer.c)
 *     GreDwmGetRedirectionStyle @ 0x1C02625BC (GreDwmGetRedirectionStyle.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0263280 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C02639A0 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     DxgkEngReleaseStableSprite @ 0x1C0264D60 (DxgkEngReleaseStableSprite.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026D01C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C026DE54 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026F850 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C02703F4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0271B2C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0272120 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0276D80 (-vSpPIDLockSpriteArea@@YA-AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0276E48 (-vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 *     bMoveDevDragRect @ 0x1C027B430 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C027B6F4 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C027B8BC (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C027BAA4 (vSetDevDragRectDPI.c)
 *     GreSaveScreenBits @ 0x1C0290ED8 (GreSaveScreenBits.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029AD48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SPRITERANGELOCK::vUnlock(SPRITERANGELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"hsem", *(_QWORD *)this);
  GreReleaseSemaphoreInternal(*(_QWORD *)this);
}
