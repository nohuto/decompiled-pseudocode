/*
 * XREFs of ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x180089AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x180089A08 (--1CTouchDragVisual@@MEAA@XZ.c)
 */

void **__fastcall CTouchDragVisual::`scalar deleting destructor'(void **this, char a2)
{
  CTouchDragVisual::~CTouchDragVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
