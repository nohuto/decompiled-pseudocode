/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x1801108B4
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

FastRegion::CRegion **__fastcall CRegion::`scalar deleting destructor'(FastRegion::CRegion **this)
{
  FastRegion::CRegion::FreeMemory(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, FastRegion::CRegion **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
