/*
 * XREFs of ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x18004EED0
 * Callers:
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x180031690 (-Link@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::AddVisualTreeDataToList(CVisual *this, struct CVisualTreeData *a2)
{
  struct _LIST_ENTRY *TreeDataListHead; // rbx
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *v9; // [rsp+38h] [rbp+10h] BYREF

  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( !TreeDataListHead )
  {
    v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v5 == WPF::ProcessHeapImpl::Alloc )
      v6 = (struct _LIST_ENTRY *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
    else
      v6 = (struct _LIST_ENTRY *)v5(WPF::g_pProcessHeap, 16uLL);
    TreeDataListHead = v6;
    if ( !v6 )
      RaiseFailFastException(0LL, 0LL, 0);
    TreeDataListHead->Blink = TreeDataListHead;
    TreeDataListHead->Flink = TreeDataListHead;
    v9 = TreeDataListHead;
    if ( TreeDataListHead == (struct _LIST_ENTRY *)`CVisual::SetTreeDataListHead'::`2'::sc_defaultValue )
      *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x80000u;
    else
      CSparseStorage::SetData((CVisual *)((char *)this + 272), 0xDu, 8u, &v9);
  }
  Blink = TreeDataListHead->Blink;
  v8 = (struct _LIST_ENTRY *)((char *)a2 + 224);
  if ( Blink->Flink != TreeDataListHead )
    __fastfail(3u);
  v8->Flink = TreeDataListHead;
  *((_QWORD *)a2 + 29) = Blink;
  Blink->Flink = v8;
  TreeDataListHead->Blink = v8;
}
