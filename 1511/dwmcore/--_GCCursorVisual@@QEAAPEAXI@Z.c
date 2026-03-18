/*
 * XREFs of ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801009F4
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18000655C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800947D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180094814 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801006C8 (--1CComposition@@MEAA@XZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180100AB8 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18010ACF4 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18010ADE4 (-Restore@CCursorVisual@@QEAAXXZ.c)
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
