/*
 * XREFs of ??_ECStandardSwapChain@@MEAAPEAXI@Z @ 0x18017D640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CStandardSwapChain@@MEAA@XZ @ 0x18017D5E8 (--1CStandardSwapChain@@MEAA@XZ.c)
 */

CStandardSwapChain *__fastcall CStandardSwapChain::`vector deleting destructor'(
        CStandardSwapChain *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CStandardSwapChain::~CStandardSwapChain(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CStandardSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
