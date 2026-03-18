/*
 * XREFs of ??_ECD2DMesh@@MEAAPEAXI@Z @ 0x18013E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CD2DMesh@@MEAA@XZ @ 0x18013E964 (--1CD2DMesh@@MEAA@XZ.c)
 */

CD2DMesh *__fastcall CD2DMesh::`vector deleting destructor'(CD2DMesh *this, char a2)
{
  CD2DMesh::~CD2DMesh(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DMesh *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
