/*
 * XREFs of ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x180092AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x180092A18 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 */

void **__fastcall CIndirectTouchVisual::`scalar deleting destructor'(void **this, char a2)
{
  CIndirectTouchVisual::~CIndirectTouchVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
