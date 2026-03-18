/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0034150
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003CC0C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C004A55C (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C004A794 (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C00A3F80 (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C00B10E0 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  if ( this )
  {
    if ( this != prgnDefault )
      FreeObject(this, 4LL);
  }
}
