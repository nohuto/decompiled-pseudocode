/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800585A0
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180058618 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDrawListCache *__fastcall CDrawListCache::`scalar deleting destructor'(CDrawListCache *this, char a2)
{
  bool v2; // zf
  void (*v5)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  v2 = *((_DWORD *)this + 4) == 0;
  *(_QWORD *)this = &CDrawListCache::`vftable';
  if ( v2 )
    --CHWDrawListEngineMetrics::s_cDrawListCaches;
  CDrawListCache::ReleaseDrawListEntries(this);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CDrawListCache *))v5)(WPF::g_pProcessHeap, this);
  }
  return this;
}
