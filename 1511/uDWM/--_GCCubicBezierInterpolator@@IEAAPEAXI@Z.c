/*
 * XREFs of ??_GCCubicBezierInterpolator@@IEAAPEAXI@Z @ 0x180090CB8
 * Callers:
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800913A0 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x180090D14 (-Cleanup@CCubicBezierInterpolator@@IEAAXXZ.c)
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
