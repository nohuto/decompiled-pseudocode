/*
 * XREFs of ??_ECTranslateTransform3D@@MEAAPEAXI@Z @ 0x18000E450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTranslateTransform3D@@MEAA@XZ @ 0x18000E580 (--1CTranslateTransform3D@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CTranslateTransform3D *__fastcall CTranslateTransform3D::`vector deleting destructor'(
        CTranslateTransform3D *this,
        char a2)
{
  CTranslateTransform3D::~CTranslateTransform3D(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTranslateTransform3D *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
