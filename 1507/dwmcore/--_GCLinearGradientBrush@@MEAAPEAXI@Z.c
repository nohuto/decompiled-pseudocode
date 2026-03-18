/*
 * XREFs of ??_GCLinearGradientBrush@@MEAAPEAXI@Z @ 0x1800F9400
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CLinearGradientBrush@@MEAA@XZ @ 0x18011FFAC (--1CLinearGradientBrush@@MEAA@XZ.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::`scalar deleting destructor'(
        CLinearGradientBrush *this,
        char a2)
{
  CLinearGradientBrush::~CLinearGradientBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLinearGradientBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
