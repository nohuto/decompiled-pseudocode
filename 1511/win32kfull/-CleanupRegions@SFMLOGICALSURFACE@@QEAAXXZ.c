/*
 * XREFs of ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C007B174
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C007B6D4 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C02608D0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 * Callees:
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C007B15C (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupRegions(REGION **this)
{
  REGION *v2; // rcx

  REGION::vDeleteREGION(this[12]);
  v2 = this[11];
  this[12] = 0LL;
  REGION::vDeleteREGION(v2);
  SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)this, 0LL);
  REGION::vDeleteREGION(this[17]);
  this[17] = 0LL;
  METAREGION::vClearMoveData((METAREGION *)(this + 17), 1);
}
