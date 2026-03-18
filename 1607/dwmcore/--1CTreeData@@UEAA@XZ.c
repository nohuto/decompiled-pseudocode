/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x1800310D0
 * Callers:
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800317B0 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x180137D00 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x180137DA0 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180031364 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ??_ECWindowOcclusionInfo@@UEAAPEAXI@Z @ 0x180031630 (--_ECWindowOcclusionInfo@@UEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  CWindowOcclusionInfo *v2; // rcx
  void *(__fastcall *v3)(CWindowOcclusionInfo *__hidden, unsigned int); // rax
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rbx
  void (*v10)(void); // rax
  void (*v11)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  void (*v12)(void); // rax
  void (*v13)(void); // rax

  *(_QWORD *)this = &CTreeData::`vftable';
  v2 = (CWindowOcclusionInfo *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = **(void *(__fastcall ***)(CWindowOcclusionInfo *__hidden, unsigned int))v2;
    if ( v3 == CWindowOcclusionInfo::`vector deleting destructor' )
      CWindowOcclusionInfo::`vector deleting destructor'(v2, 1u);
    else
      v3(v2, 1u);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v12 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
    else
      v12();
    *((_QWORD *)this + 14) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v10 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
    else
      v10();
    *((_QWORD *)this + 19) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 20);
  if ( v6 )
  {
    v13 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v13 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
    else
      v13();
    *((_QWORD *)this + 20) = 0LL;
  }
  CDrawListCacheSet::Invalidate((CTreeData *)((char *)this + 128));
  v9 = (void *)*((_QWORD *)this + 16);
  if ( v9 )
  {
    DynArrayImpl<1>::~DynArrayImpl<1>(v9, v7, v8);
    v11 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v11 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v9);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v11)(WPF::g_pProcessHeap, v9);
  }
}
