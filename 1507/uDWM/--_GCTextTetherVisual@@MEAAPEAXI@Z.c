/*
 * XREFs of ??_GCTextTetherVisual@@MEAAPEAXI@Z @ 0x1800830A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x180082F34 (--1CTextTetherVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTextTetherVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTextTetherVisual::~CTextTetherVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
