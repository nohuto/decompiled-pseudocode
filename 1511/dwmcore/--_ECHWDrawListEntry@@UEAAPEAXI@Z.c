/*
 * XREFs of ??_ECHWDrawListEntry@@UEAAPEAXI@Z @ 0x18002CEB0
 * Callers:
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x18002D04C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?ReleaseResources@CCommonRenderingEffect@@UEAAXXZ @ 0x18007A990 (-ReleaseResources@CCommonRenderingEffect@@UEAAXXZ.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`vector deleting destructor'(CHWDrawListEntry *this, char a2)
{
  CMILRefCountBase *v2; // rdi
  unsigned int (__fastcall *v5)(CMILRefCountBase *__hidden); // rsi
  __int64 v6; // rsi
  void (*v7)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 2);
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  if ( v2 )
  {
    v5 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v2 + 8LL);
    if ( v5 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v2);
    else
      v5(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *(_QWORD *)((char *)this + 28);
  if ( v6 )
  {
    if ( *(void (__fastcall **)(CCommonRenderingEffect *__hidden))(v6 + 32) == CCommonRenderingEffect::ReleaseResources )
      CCommonRenderingEffect::ReleaseResources((CHWDrawListEntry *)((char *)this + 28));
    else
      (*(void (__fastcall **)(char *))(v6 + 32))((char *)this + 28);
  }
  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v7 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CHWDrawListEntry *))v7)(WPF::g_pProcessHeap, this);
  }
  return this;
}
