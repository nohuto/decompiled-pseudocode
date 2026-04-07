/*
 * XREFs of ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x18008AC88
 * Callers:
 *     ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x18008B37C (-CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationSt.c)
 *     ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x18008B900 (-Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdi

  v1 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CThemeAnimationScheduleHelper::CCubicBezierChopper::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 3));
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
