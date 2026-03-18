/*
 * XREFs of ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x18007AC00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18007AB28 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDWMSwapChain *__fastcall CDWMSwapChain::`scalar deleting destructor'(CDWMSwapChain *this, char a2)
{
  CDWMSwapChain::~CDWMSwapChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
