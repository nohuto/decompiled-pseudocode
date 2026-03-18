/*
 * XREFs of ??_ECSolidColorBrush@@MEAAPEAXI@Z @ 0x180083C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSolidColorBrush@@MEAA@XZ @ 0x180083E70 (--1CSolidColorBrush@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CSolidColorBrush *__fastcall CSolidColorBrush::`vector deleting destructor'(CSolidColorBrush *this, char a2)
{
  CSolidColorBrush::~CSolidColorBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSolidColorBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
