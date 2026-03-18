/*
 * XREFs of ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x1800F9340
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18011FA04 (--1CGeometryGroup@@MEAA@XZ.c)
 */

CGeometryGroup *__fastcall CGeometryGroup::`vector deleting destructor'(CGeometryGroup *this, char a2)
{
  CGeometryGroup::~CGeometryGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGeometryGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
