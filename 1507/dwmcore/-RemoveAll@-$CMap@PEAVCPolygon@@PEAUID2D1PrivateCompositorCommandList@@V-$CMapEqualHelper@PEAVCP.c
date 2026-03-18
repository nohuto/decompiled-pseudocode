/*
 * XREFs of ?RemoveAll@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAXXZ @ 0x180015824
 * Callers:
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x1800156C0 (--1CD2DCommandList@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll(
        _QWORD *a1)
{
  void (*v2)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rbp

  if ( *a1 )
  {
    v2 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v2 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)*a1);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v2)(WPF::g_pProcessHeap, *a1);
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)a1[1]);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v3)(WPF::g_pProcessHeap, a1[1]);
    a1[1] = 0LL;
  }
  *((_DWORD *)a1 + 4) = 0;
}
