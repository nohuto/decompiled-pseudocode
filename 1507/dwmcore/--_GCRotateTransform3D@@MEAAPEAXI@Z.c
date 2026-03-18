/*
 * XREFs of ??_GCRotateTransform3D@@MEAAPEAXI@Z @ 0x1800F9520
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CRotateTransform3D@@MEAA@XZ @ 0x18011E984 (--1CRotateTransform3D@@MEAA@XZ.c)
 */

CRotateTransform3D *__fastcall CRotateTransform3D::`scalar deleting destructor'(CRotateTransform3D *this, char a2)
{
  CRotateTransform3D::~CRotateTransform3D(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRotateTransform3D *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
