/*
 * XREFs of ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x18008C630
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x18008C524 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDWMOffScreenSwapChain *__fastcall CDWMOffScreenSwapChain::`scalar deleting destructor'(
        CDWMOffScreenSwapChain *this,
        char a2)
{
  CDWMOffScreenSwapChain::~CDWMOffScreenSwapChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMOffScreenSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
