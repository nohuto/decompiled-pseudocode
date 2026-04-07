/*
 * XREFs of ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x180071440
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800713F0 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 */

CImmersiveWindowIconic *__fastcall CImmersiveWindowIconic::`vector deleting destructor'(
        CImmersiveWindowIconic *this,
        char a2)
{
  CImmersiveWindowIconic::~CImmersiveWindowIconic(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImmersiveWindowIconic *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
