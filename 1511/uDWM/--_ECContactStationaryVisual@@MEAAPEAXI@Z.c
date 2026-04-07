/*
 * XREFs of ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x180088060
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180087FD8 (--1CContactStationaryVisual@@MEAA@XZ.c)
 */

void **__fastcall CContactStationaryVisual::`vector deleting destructor'(void **this, char a2)
{
  CContactStationaryVisual::~CContactStationaryVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
