/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0036608
 * Callers:
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C001EA0C (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C001EDEC (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002BAFC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C00BF040 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  if ( this )
  {
    if ( this != prgnDefault )
      FreeObject(this, 4LL);
  }
}
