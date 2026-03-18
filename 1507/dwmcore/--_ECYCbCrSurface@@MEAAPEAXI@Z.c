/*
 * XREFs of ??_ECYCbCrSurface@@MEAAPEAXI@Z @ 0x1800F9700
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CYCbCrSurface@@MEAA@XZ @ 0x18010CAC8 (--1CYCbCrSurface@@MEAA@XZ.c)
 */

CYCbCrSurface *__fastcall CYCbCrSurface::`vector deleting destructor'(CYCbCrSurface *this, char a2)
{
  CYCbCrSurface::~CYCbCrSurface(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CYCbCrSurface *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
