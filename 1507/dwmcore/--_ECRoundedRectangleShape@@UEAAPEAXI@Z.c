/*
 * XREFs of ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x18014AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::`vector deleting destructor'(
        CRoundedRectangleShape *this,
        char a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CShape::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRoundedRectangleShape *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
