/*
 * XREFs of ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x180086530
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x180086428 (--1CTetherVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTetherVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTetherVisual::~CTetherVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
