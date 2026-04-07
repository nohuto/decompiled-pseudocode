/*
 * XREFs of ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x18008F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x18008E758 (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::Release(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  if ( (*((_DWORD *)this + 2))-- != 1 )
    return *((unsigned int *)this + 2);
  CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CThemeAnimationScheduleHelper::CCubicBezierChopper *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return 0LL;
}
