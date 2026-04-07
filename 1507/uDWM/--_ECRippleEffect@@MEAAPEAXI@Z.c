/*
 * XREFs of ??_ECRippleEffect@@MEAAPEAXI@Z @ 0x18007C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x18007C348 (--1CRippleEffect@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CRippleEffect::`vector deleting destructor'(CBaseObject **this, char a2)
{
  CRippleEffect::~CRippleEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
