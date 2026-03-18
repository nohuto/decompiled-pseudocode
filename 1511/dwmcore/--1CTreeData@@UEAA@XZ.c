/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x1800592BC
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x18005C850 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x18011FEC0 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x18011FF30 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_ECVisualOcclusionInfo@@UEAAPEAXI@Z @ 0x180052080 (--_ECVisualOcclusionInfo@@UEAAPEAXI@Z.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18005971C (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  CVisualOcclusionInfo *v1; // rdi
  CVisualOcclusionInfo *(__fastcall *v3)(CVisualOcclusionInfo *, char); // rsi
  void **v4; // rsi
  void (__fastcall *v5)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v8)(WPF::ProcessHeapImpl *, void *); // rbp

  v1 = (CVisualOcclusionInfo *)*((_QWORD *)this + 4);
  *(_QWORD *)this = &CTreeData::`vftable';
  if ( v1 )
  {
    v3 = **(CVisualOcclusionInfo *(__fastcall ***)(CVisualOcclusionInfo *, char))v1;
    if ( v3 == CVisualOcclusionInfo::`vector deleting destructor' )
      CVisualOcclusionInfo::`vector deleting destructor'(v1, 1);
    else
      v3(v1, 1);
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *((_QWORD *)this + 13) )
  {
    v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 13));
    else
      v7(WPF::g_pProcessHeap, *((void **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  if ( *((_QWORD *)this + 25) )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 25));
    else
      v5(WPF::g_pProcessHeap, *((void **)this + 25));
    *((_QWORD *)this + 25) = 0LL;
  }
  if ( *((_QWORD *)this + 26) )
  {
    v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v8 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 26));
    else
      v8(WPF::g_pProcessHeap, *((void **)this + 26));
    *((_QWORD *)this + 26) = 0LL;
  }
  v4 = (void **)((char *)this + 120);
  CDrawListCacheSet::Invalidate((CTreeData *)((char *)this + 120));
  if ( *((_QWORD *)this + 19) != *((_QWORD *)this + 20) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( *((_QWORD *)this + 15) != *((_QWORD *)this + 16) )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *v4);
    else
      v6(WPF::g_pProcessHeap, *v4);
    *v4 = 0LL;
  }
}
