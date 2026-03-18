/*
 * XREFs of ??1MeshGraph@Mesh@@QEAA@XZ @ 0x1800A3ACC
 * Callers:
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800A3A84 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Mesh::MeshGraph::~MeshGraph(Mesh::MeshGraph *this)
{
  void *v2; // rdx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax
  void *v4; // rdx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *, void *); // rax
  void *v6; // rdx
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rax
  void *v8; // rdx
  void (__fastcall *v9)(WPF::ProcessHeapImpl *, void *); // rax

  v2 = (void *)*((_QWORD *)this + 2);
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    v3(WPF::g_pProcessHeap, v2);
  v4 = (void *)*((_QWORD *)this + 5);
  v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v5 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
  else
    v5(WPF::g_pProcessHeap, v4);
  v6 = (void *)*((_QWORD *)this + 9);
  v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v7 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
  else
    v7(WPF::g_pProcessHeap, v6);
  v8 = (void *)*((_QWORD *)this + 14);
  v9 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v9 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
  else
    v9(WPF::g_pProcessHeap, v8);
}
