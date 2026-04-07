/*
 * XREFs of ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x18003B0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18003BA44 (--1CWindowIconic@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CWindowIconic *__fastcall CWindowIconic::`vector deleting destructor'(CWindowIconic *this, char a2)
{
  CWindowIconic::~CWindowIconic(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowIconic *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
