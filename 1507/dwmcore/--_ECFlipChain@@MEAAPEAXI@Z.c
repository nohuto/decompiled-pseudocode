/*
 * XREFs of ??_ECFlipChain@@MEAAPEAXI@Z @ 0x180108788
 * Callers:
 *     ??_ECFlipChain@@OBA@EAAPEAXI@Z @ 0x18009A830 (--_ECFlipChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x18010857C (--1CFlipChain@@MEAA@XZ.c)
 */

CFlipChain *__fastcall CFlipChain::`vector deleting destructor'(CFlipChain *this, char a2)
{
  CFlipChain::~CFlipChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CFlipChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
