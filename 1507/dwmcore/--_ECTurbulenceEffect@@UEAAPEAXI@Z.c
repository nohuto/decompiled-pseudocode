/*
 * XREFs of ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x1800020D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180002C8C (--1CFilterEffect@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::`vector deleting destructor'(CTurbulenceEffect *this, char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTurbulenceEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
