/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003ECE0
 * Callers:
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002C90C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003EA44 (-Release@CRegion@@QEBAJXZ.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C003EC38 (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C003ECBC (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C00A8A58 (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C00B48A0 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  if ( this && this != prgnDefault )
  {
    if ( *((__int16 *)this + 7) >= 0 )
    {
      Win32FreePool();
    }
    else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
    {
      Win32FreeToPagedLookasideListImpl_0();
    }
  }
}
