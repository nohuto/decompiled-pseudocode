/*
 * XREFs of ??_ECVisualOcclusionInfo@@UEAAPEAXI@Z @ 0x180031400
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x180059654 (--1CTreeData@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CVisualOcclusionInfo *__fastcall CVisualOcclusionInfo::`vector deleting destructor'(
        CVisualOcclusionInfo *this,
        char a2)
{
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rsi

  *(_QWORD *)this = &COcclusionInfo::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v3(WPF::g_pProcessHeap, this);
  }
  return this;
}
