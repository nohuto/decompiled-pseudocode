/*
 * XREFs of ??0CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@PEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@PEAN3IPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@NNI@Z @ 0x18008AB98
 * Callers:
 *     ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x18008B37C (-CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationSt.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CThemeAnimationScheduleHelper::CCubicBezierChopper *__fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::CCubicBezierChopper(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        struct IUIAnimationStoryboard2 *a2,
        struct IUIAnimationVariable2 *a3,
        struct IUIAnimationTransitionLibrary2 *a4,
        double *a5,
        double *a6,
        unsigned int a7,
        struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *a8,
        double a9,
        double a10,
        struct CSecondaryWindowRepresentation *a11)
{
  double v12; // rax

  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 3) = a4;
  *(_QWORD *)this = &CThemeAnimationScheduleHelper::CCubicBezierChopper::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = a6;
  *((_QWORD *)this + 6) = a5;
  *((_DWORD *)this + 14) = a7;
  *((double *)this + 8) = a5[(unsigned int)a11];
  *((double *)this + 9) = a9;
  *((double *)this + 10) = a10;
  v12 = a6[(unsigned int)a11];
  *((_QWORD *)this + 16) = -1LL;
  *((double *)this + 11) = v12;
  *((_DWORD *)this + 24) = (_DWORD)a11;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_WORD *)this + 60) = 0;
  ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))a2->lpVtbl->AddRef)(a2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  return this;
}
