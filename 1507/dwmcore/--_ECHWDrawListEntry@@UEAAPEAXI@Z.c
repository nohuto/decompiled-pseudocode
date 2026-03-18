/*
 * XREFs of ??_ECHWDrawListEntry@@UEAAPEAXI@Z @ 0x180073F10
 * Callers:
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x180073B6C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?ReleaseResources@CCommonRenderingEffect@@UEAAXXZ @ 0x18003F780 (-ReleaseResources@CCommonRenderingEffect@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`vector deleting destructor'(CHWDrawListEntry *this, char a2)
{
  CMILRefCountBase *v2; // rdi
  __int64 (__fastcall *v5)(CMILRefCountBase *); // rsi
  __int64 v6; // rsi
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rsi

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 2);
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  if ( v2 )
  {
    v5 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v2 + 8LL);
    if ( v5 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v2);
    else
      v5(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *(_QWORD *)((char *)this + 28);
  if ( v6 )
  {
    if ( *(void (__fastcall **)(CCommonRenderingEffect *))(v6 + 24) == CCommonRenderingEffect::ReleaseResources )
      CCommonRenderingEffect::ReleaseResources((CHWDrawListEntry *)((char *)this + 28));
    else
      (*(void (__fastcall **)(char *))(v6 + 24))((char *)this + 28);
  }
  --CHWDrawListEngineMetrics::s_cDrawListEntries;
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
