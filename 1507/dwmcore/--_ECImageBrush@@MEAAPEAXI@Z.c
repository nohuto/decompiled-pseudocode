/*
 * XREFs of ??_ECImageBrush@@MEAAPEAXI@Z @ 0x180085140
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImageBrush@@MEAA@XZ @ 0x180085C00 (--1CImageBrush@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CImageBrush *__fastcall CImageBrush::`vector deleting destructor'(CImageBrush *this, char a2)
{
  CImageBrush::~CImageBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImageBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
