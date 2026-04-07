/*
 * XREFs of ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x180046D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180046F68 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CDirectTouchVisual *__fastcall CDirectTouchVisual::`scalar deleting destructor'(CDirectTouchVisual *this, char a2)
{
  CDirectTouchVisual::~CDirectTouchVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDirectTouchVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
