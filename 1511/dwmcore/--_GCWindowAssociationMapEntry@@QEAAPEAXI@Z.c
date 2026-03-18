/*
 * XREFs of ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800AB6E8
 * Callers:
 *     ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180049CBC (-CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800AB380 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800AB50C (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18010477C (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x180067A84 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 */

CWindowAssociationMapEntry *__fastcall CWindowAssociationMapEntry::`scalar deleting destructor'(
        CWindowAssociationMapEntry *this)
{
  CPtrArrayBase::Clear((CWindowAssociationMapEntry *)((char *)this + 24));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowAssociationMapEntry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
