/*
 * XREFs of ?ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z @ 0x1C015A7A8
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C000AEE4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00AD708 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall DXGDODPRESENT::ReleaseVidPnSourceOwnership(DXGDODPRESENT *this, unsigned int a2)
{
  BLTQUEUE *v2; // rbx

  v2 = (BLTQUEUE *)(*((_QWORD *)this + 1) + 2384LL * a2);
  BLTQUEUE::Flush(v2);
  BLTQUEUE::Reset(v2, 1u);
}
