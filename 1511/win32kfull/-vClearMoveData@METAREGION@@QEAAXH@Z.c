/*
 * XREFs of ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C007B860
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0033590 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0036538 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C007B174 (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C01C2E0C (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02B91B0 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02B9388 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02B9510 (-vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02B9614 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall METAREGION::vClearMoveData(METAREGION *this, int a2)
{
  REGION *v4; // rcx
  REGION *v5; // rcx
  REGION *v6; // rcx

  v4 = (REGION *)*((_QWORD *)this + 2);
  if ( v4 && a2 )
    REGION::vDeleteREGION(v4);
  v5 = (REGION *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    REGION::vDeleteREGION(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
  v6 = (REGION *)*((_QWORD *)this + 4);
  if ( v6 && a2 )
    REGION::vDeleteREGION(v6);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
