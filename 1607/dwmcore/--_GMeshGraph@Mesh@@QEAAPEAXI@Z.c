/*
 * XREFs of ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800A3A84
 * Callers:
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800920C8 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x1800975DC (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x1800A3ACC (--1MeshGraph@Mesh@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

Mesh::MeshGraph *__fastcall Mesh::MeshGraph::`scalar deleting destructor'(Mesh::MeshGraph *this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rax

  Mesh::MeshGraph::~MeshGraph(this);
  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v2(WPF::g_pProcessHeap, this);
  return this;
}
