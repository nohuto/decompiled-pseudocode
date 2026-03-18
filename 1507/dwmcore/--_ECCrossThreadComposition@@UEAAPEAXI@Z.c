/*
 * XREFs of ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x1800E8230
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1800E243C (--1CComposition@@MEAA@XZ.c)
 */

CCrossThreadComposition *__fastcall CCrossThreadComposition::`vector deleting destructor'(
        CCrossThreadComposition *this,
        char a2)
{
  CComposition::~CComposition(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCrossThreadComposition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
