/*
 * XREFs of ??_GCAnalogSwapChain@@MEAAPEAXI@Z @ 0x180128210
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CAnalogSwapChain@@MEAA@XZ @ 0x180128184 (--1CAnalogSwapChain@@MEAA@XZ.c)
 */

CAnalogSwapChain *__fastcall CAnalogSwapChain::`scalar deleting destructor'(CAnalogSwapChain *this, char a2)
{
  CAnalogSwapChain::~CAnalogSwapChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
