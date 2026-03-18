/*
 * XREFs of ??_ECHWDrawListCache@@MEAAPEAXI@Z @ 0x18002CFC0
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x18002D04C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CHWDrawListCache *__fastcall CHWDrawListCache::`vector deleting destructor'(CHWDrawListCache *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  *(_QWORD *)this = &CHWDrawListCache::`vftable';
  CHWDrawListCache::Invalidate(this);
  --CHWDrawListEngineMetrics::s_cDrawListCaches;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CHWDrawListCache *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
