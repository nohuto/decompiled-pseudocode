/*
 * XREFs of ?Clear@CCpuClippingData@@QEAAXXZ @ 0x180035DB8
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800594A0 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall CCpuClippingData::Clear(void **this)
{
  void (*v2)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rbp

  if ( this[2] )
  {
    v2 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v2 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[2]);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v2)(WPF::g_pProcessHeap, this[2]);
    this[2] = 0LL;
  }
  if ( this[3] )
  {
    v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[3]);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v3)(WPF::g_pProcessHeap, this[3]);
    this[3] = 0LL;
  }
}
