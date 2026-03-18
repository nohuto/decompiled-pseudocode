/*
 * XREFs of ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1800554A4
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180031250 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCpuClippingData::Clear(CCpuClippingData *this)
{
  void *v1; // rdx
  void (*v3)(void); // rax
  void *v4; // rdx
  void (*v5)(void); // rax

  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v3 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
    else
      v3();
    *((_QWORD *)this + 2) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v5 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
    else
      v5();
    *((_QWORD *)this + 3) = 0LL;
  }
}
