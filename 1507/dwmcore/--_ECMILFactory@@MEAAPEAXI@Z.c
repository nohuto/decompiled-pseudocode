/*
 * XREFs of ??_ECMILFactory@@MEAAPEAXI@Z @ 0x18014B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CMILFactory@@MEAA@XZ @ 0x18014B940 (--1CMILFactory@@MEAA@XZ.c)
 */

CMILFactory *__fastcall CMILFactory::`vector deleting destructor'(CMILFactory *this, char a2)
{
  CMILFactory::~CMILFactory(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILFactory *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
