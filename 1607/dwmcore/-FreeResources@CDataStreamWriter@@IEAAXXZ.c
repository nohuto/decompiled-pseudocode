/*
 * XREFs of ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18004BF34
 * Callers:
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180043D84 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18004C500 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18004EA5C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x18004EAF8 (--1CRenderData@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDataStreamWriter::FreeResources(CDataStreamWriter *this)
{
  CDataStreamWriter *v2; // rax
  void *v3; // rdx
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v5; // rcx
  char *v6; // rdx
  void (*v7)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  while ( 1 )
  {
    v2 = *(CDataStreamWriter **)this;
    if ( *(CDataStreamWriter **)this == this )
      break;
    v5 = *(_QWORD *)v2;
    if ( *((CDataStreamWriter **)v2 + 1) != this || *(CDataStreamWriter **)(v5 + 8) != v2 )
      __fastfail(3u);
    *(_QWORD *)this = v5;
    v6 = (char *)v2 - 8;
    *(_QWORD *)(v5 + 8) = this;
    v7 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, char *))v7)(WPF::g_pProcessHeap, v6);
  }
  v3 = (void *)*((_QWORD *)this + 2);
  v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v4 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v4)(WPF::g_pProcessHeap, v3);
}
