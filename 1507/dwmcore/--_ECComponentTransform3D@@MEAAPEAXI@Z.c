/*
 * XREFs of ??_ECComponentTransform3D@@MEAAPEAXI@Z @ 0x1800F9208
 * Callers:
 *     ??_ECComponentTransform3D@@O7EAAPEAXI@Z @ 0x18009A110 (--_ECComponentTransform3D@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CComponentTransform3D@@MEAA@XZ @ 0x18011EC70 (--1CComponentTransform3D@@MEAA@XZ.c)
 */

CComponentTransform3D *__fastcall CComponentTransform3D::`vector deleting destructor'(
        CComponentTransform3D *this,
        char a2)
{
  CComponentTransform3D::~CComponentTransform3D(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CComponentTransform3D *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
