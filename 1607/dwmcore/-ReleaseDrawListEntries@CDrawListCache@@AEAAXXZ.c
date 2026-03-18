/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180058618
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800585A0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180058CA4 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  __int64 i; // rdi
  CMILRefCountBase *v3; // rcx
  void (*v4)(void); // rax
  void *v5; // rdx
  void (*v6)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v3 = *(CMILRefCountBase **)(*((_QWORD *)this + 4) + 8 * i);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
      if ( (char *)v4 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v3);
      else
        v4();
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) = 0LL;
    }
  }
  v5 = (void *)*((_QWORD *)this + 4);
  v6 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v6 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v6)(WPF::g_pProcessHeap, v5);
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
