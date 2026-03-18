/*
 * XREFs of ??_GCGeometry@@MEAAPEAXI@Z @ 0x1800F51B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGeometry@@MEAA@XZ @ 0x180017818 (--1CGeometry@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CGeometry *__fastcall CGeometry::`scalar deleting destructor'(CGeometry *this, char a2)
{
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGeometry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
