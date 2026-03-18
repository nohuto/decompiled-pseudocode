/*
 * XREFs of ??_GCMatrixTransform3D@@MEAAPEAXI@Z @ 0x18005F3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x1800482F8 (--1CResource@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CMatrixTransform3D *__fastcall CMatrixTransform3D::`scalar deleting destructor'(CMatrixTransform3D *this, char a2)
{
  *(_QWORD *)this = &CMatrixTransform3D::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMatrixTransform3D *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
