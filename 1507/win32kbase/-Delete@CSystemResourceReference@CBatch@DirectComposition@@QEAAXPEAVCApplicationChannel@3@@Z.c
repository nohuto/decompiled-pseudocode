/*
 * XREFs of ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0022778
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C00205D4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z @ 0x1C00206E0 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C002F340 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022C34 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 */

void __fastcall DirectComposition::CBatch::CSystemResourceReference::Delete(
        DirectComposition::CBatch::CSystemResourceReference *this,
        DirectComposition::CConnection **a2)
{
  unsigned int v4; // edx

  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    DirectComposition::CConnection::ReleaseSystemResource(a2[5], v4);
    *((_DWORD *)this + 2) = 0;
  }
  Win32FreePool(this);
}
