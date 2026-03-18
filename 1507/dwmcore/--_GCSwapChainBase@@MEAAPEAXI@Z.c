/*
 * XREFs of ??_GCSwapChainBase@@MEAAPEAXI@Z @ 0x180139550
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x18008C01C (--1CSwapChainBase@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CSwapChainBase *__fastcall CSwapChainBase::`scalar deleting destructor'(CSwapChainBase *this, char a2)
{
  CSwapChainBase::~CSwapChainBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSwapChainBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
