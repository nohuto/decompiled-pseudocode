/*
 * XREFs of ??_ECDWMSwapChainDDA@@MEAAPEAXI@Z @ 0x18017CFF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CDWMSwapChainDDA@@MEAA@XZ @ 0x18017CFCC (--1CDWMSwapChainDDA@@MEAA@XZ.c)
 */

CDWMSwapChainDDA *__fastcall CDWMSwapChainDDA::`vector deleting destructor'(CDWMSwapChainDDA *this, char a2)
{
  CDWMSwapChainDDA::~CDWMSwapChainDDA(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMSwapChainDDA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
