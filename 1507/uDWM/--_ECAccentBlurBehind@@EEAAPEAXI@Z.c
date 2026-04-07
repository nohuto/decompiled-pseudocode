/*
 * XREFs of ??_ECAccentBlurBehind@@EEAAPEAXI@Z @ 0x180008FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x180009158 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAccentBlurBehind *__fastcall CAccentBlurBehind::`vector deleting destructor'(CAccentBlurBehind *this, char a2)
{
  CAccentBlurBehind::~CAccentBlurBehind(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAccentBlurBehind *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
