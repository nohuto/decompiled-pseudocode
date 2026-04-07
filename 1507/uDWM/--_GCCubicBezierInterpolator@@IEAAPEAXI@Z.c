/*
 * XREFs of ??_GCCubicBezierInterpolator@@IEAAPEAXI@Z @ 0x18008D740
 * Callers:
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x18008DE30 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x18008D79C (-Cleanup@CCubicBezierInterpolator@@IEAAXXZ.c)
 */

CCubicBezierInterpolator *__fastcall CCubicBezierInterpolator::`scalar deleting destructor'(
        CCubicBezierInterpolator *this)
{
  *(_QWORD *)this = &CCubicBezierInterpolator::`vftable';
  CCubicBezierInterpolator::Cleanup(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCubicBezierInterpolator *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
