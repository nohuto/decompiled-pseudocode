/*
 * XREFs of ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x1800F9260
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CGeometry2D@@MEAA@XZ @ 0x1800F8B64 (--1CGeometry2D@@MEAA@XZ.c)
 */

CGeometry2D *__fastcall CGeometry2D::`scalar deleting destructor'(CGeometry2D *this, char a2)
{
  CGeometry2D::~CGeometry2D(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGeometry2D *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
