/*
 * XREFs of ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x1800B9330
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800B9248 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDWMOffScreenSwapChain *__fastcall CDWMOffScreenSwapChain::`scalar deleting destructor'(
        CDWMOffScreenSwapChain *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CDWMOffScreenSwapChain::~CDWMOffScreenSwapChain(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMOffScreenSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
