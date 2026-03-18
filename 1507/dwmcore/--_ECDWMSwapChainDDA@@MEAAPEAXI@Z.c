/*
 * XREFs of ??_ECDWMSwapChainDDA@@MEAAPEAXI@Z @ 0x18013C450
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CDWMSwapChainDDA@@MEAA@XZ @ 0x18013C42C (--1CDWMSwapChainDDA@@MEAA@XZ.c)
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
