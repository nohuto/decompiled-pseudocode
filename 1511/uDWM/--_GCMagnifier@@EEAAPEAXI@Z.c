/*
 * XREFs of ??_GCMagnifier@@EEAAPEAXI@Z @ 0x180079FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CMagnifier@@EEAA@XZ @ 0x180079F44 (--1CMagnifier@@EEAA@XZ.c)
 */

CMagnifier *__fastcall CMagnifier::`scalar deleting destructor'(CMagnifier *this, char a2)
{
  CMagnifier::~CMagnifier(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMagnifier *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
