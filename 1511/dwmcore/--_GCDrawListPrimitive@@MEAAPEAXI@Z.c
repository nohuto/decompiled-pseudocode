/*
 * XREFs of ??_GCDrawListPrimitive@@MEAAPEAXI@Z @ 0x180074B90
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CDrawListPrimitive *__fastcall CDrawListPrimitive::`scalar deleting destructor'(CDrawListPrimitive *this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rsi

  *(_QWORD *)this = &CDrawListPrimitive::`vftable';
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 != &g_rgEmptyPrimitiveBaseVertices )
    _aligned_free(v4);
  v5 = (void *)*((_QWORD *)this + 7);
  if ( v5 != &g_rgEmptyPrimitiveAAFixupVertices )
    _aligned_free(v5);
  if ( *((_UNKNOWN **)this + 9) != &g_rgEmptyPrimitiveIndices )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 9));
    else
      v6(WPF::g_pProcessHeap, *((void **)this + 9));
  }
  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v7(WPF::g_pProcessHeap, this);
  }
  return this;
}
