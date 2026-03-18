/*
 * XREFs of ??_ECStandardSwapChain@@MEAAPEAXI@Z @ 0x18013CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CStandardSwapChain@@MEAA@XZ @ 0x18013CAE0 (--1CStandardSwapChain@@MEAA@XZ.c)
 */

CStandardSwapChain *__fastcall CStandardSwapChain::`vector deleting destructor'(CStandardSwapChain *this, char a2)
{
  CStandardSwapChain::~CStandardSwapChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CStandardSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
