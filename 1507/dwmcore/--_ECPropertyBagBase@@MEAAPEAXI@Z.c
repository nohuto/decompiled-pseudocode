/*
 * XREFs of ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x180115800
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CPropertyBagBase@@MEAA@XZ @ 0x1801157E0 (--1CPropertyBagBase@@MEAA@XZ.c)
 */

CPropertyBagBase *__fastcall CPropertyBagBase::`vector deleting destructor'(CPropertyBagBase *this, char a2)
{
  CPropertyBagBase::~CPropertyBagBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPropertyBagBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
