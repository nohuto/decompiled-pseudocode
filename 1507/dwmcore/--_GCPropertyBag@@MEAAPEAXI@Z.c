/*
 * XREFs of ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x180120AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CPropertyBag@@MEAA@XZ @ 0x1801209DC (--1CPropertyBag@@MEAA@XZ.c)
 */

CPropertyBag *__fastcall CPropertyBag::`scalar deleting destructor'(CPropertyBag *this, char a2)
{
  CPropertyBag::~CPropertyBag(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPropertyBag *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
