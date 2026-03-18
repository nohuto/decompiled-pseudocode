/*
 * XREFs of ??_GCDrawListPrimitive@@MEAAPEAXI@Z @ 0x18001BC90
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDrawListPrimitive *__fastcall CDrawListPrimitive::`scalar deleting destructor'(CDrawListPrimitive *this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void (*v6)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  void (*v7)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  *(_QWORD *)this = &CDrawListPrimitive::`vftable';
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 != &g_rgEmptyPrimitiveBaseVertices )
    _aligned_free(v4);
  v5 = (void *)*((_QWORD *)this + 7);
  if ( v5 != &g_rgEmptyPrimitiveAAFixupVertices )
    _aligned_free(v5);
  if ( *((_UNKNOWN **)this + 9) != &g_rgEmptyPrimitiveIndices )
  {
    v6 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 9));
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v6)(WPF::g_pProcessHeap, *((_QWORD *)this + 9));
  }
  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v7 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CDrawListPrimitive *))v7)(WPF::g_pProcessHeap, this);
  }
  return this;
}
