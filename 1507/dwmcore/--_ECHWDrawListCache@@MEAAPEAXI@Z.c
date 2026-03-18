/*
 * XREFs of ??_ECHWDrawListCache@@MEAAPEAXI@Z @ 0x180073AF0
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x180073B6C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHWDrawListCache *__fastcall CHWDrawListCache::`vector deleting destructor'(CHWDrawListCache *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rsi

  *(_QWORD *)this = &CHWDrawListCache::`vftable';
  CHWDrawListCache::Invalidate(this);
  --CHWDrawListEngineMetrics::s_cDrawListCaches;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
