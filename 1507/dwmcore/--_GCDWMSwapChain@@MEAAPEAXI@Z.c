/*
 * XREFs of ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x18008BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18008BE04 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
