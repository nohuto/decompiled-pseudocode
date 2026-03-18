/*
 * XREFs of ??_GCDrawListPrimitive@@MEAAPEAXI@Z @ 0x180079420
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDrawListPrimitive *__fastcall CDrawListPrimitive::`scalar deleting destructor'(CDrawListPrimitive *this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rdx
  void (*v8)(void); // rax
  void (__fastcall *v9)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CDrawListPrimitive::`vftable';
  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 != &g_rgEmptyPrimitiveBaseVerticesLocal )
    _aligned_free(v4);
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 != &g_rgEmptyPrimitiveBaseVertices )
    _aligned_free(v5);
  v6 = (void *)*((_QWORD *)this + 7);
  if ( v6 != &g_rgEmptyPrimitiveAAFixupVertices )
    _aligned_free(v6);
  v7 = (void *)*((_QWORD *)this + 10);
  if ( v7 != &g_rgEmptyPrimitiveIndices )
  {
    v8 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v8 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v7);
    else
      v8();
  }
  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v9 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v9 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v9(WPF::g_pProcessHeap, this);
  }
  return this;
}
