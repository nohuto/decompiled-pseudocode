/*
 * XREFs of ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800B71EC
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18000CD9C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18000CDD0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18003AF04 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800B70E8 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180116584 (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180116FE0 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18012121C (-Restore@CCursorVisual@@QEAAXXZ.c)
 */

CCursorVisual *__fastcall CCursorVisual::`scalar deleting destructor'(struct CResource ***this)
{
  struct CResource **v2; // rdx

  if ( *((_DWORD *)this + 7) )
    CCursorVisual::Restore((CCursorVisual *)this);
  v2 = this[1];
  if ( v2 )
    CComposition::ReleaseWeakReference((CComposition *)*this, v2);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource ***))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return (CCursorVisual *)this;
}
