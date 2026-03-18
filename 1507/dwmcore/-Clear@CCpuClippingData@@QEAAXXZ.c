/*
 * XREFs of ?Clear@CCpuClippingData@@QEAAXXZ @ 0x180059A88
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x180059654 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180059780 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCpuClippingData::Clear(void **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rbp

  if ( this[2] )
  {
    v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v2 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[2]);
    else
      v2(WPF::g_pProcessHeap, this[2]);
    this[2] = 0LL;
  }
  if ( this[3] )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[3]);
    else
      v3(WPF::g_pProcessHeap, this[3]);
    this[3] = 0LL;
  }
}
