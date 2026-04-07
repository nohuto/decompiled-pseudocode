/*
 * XREFs of ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x18008B37C
 * Callers:
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180031840 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??0CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@PEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@PEAN3IPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@NNI@Z @ 0x18008AB98 (--0CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@PEAUIUIAnimationStoryboard2@@PEAUIUIA.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x18008AC88 (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CreateAndAddChoppedCubicBezierTransition(
        CThemeAnimationScheduleHelper *this,
        struct IUIAnimationStoryboard2 *a2,
        struct IUIAnimationVariable2 *a3,
        struct IUIAnimationTransitionLibrary2 *a4,
        double a5,
        double *a6,
        double *a7,
        unsigned int a8,
        double *a9,
        double *a10,
        struct CSecondaryWindowRepresentation *a11,
        float a12,
        float a13,
        float a14,
        float a15,
        struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *a16)
{
  double v18; // xmm10_8
  double v19; // xmm6_8
  double v20; // xmm1_8
  double v21; // xmm0_8
  __int64 v22; // rdx
  HRESULT v23; // esi
  __int64 v24; // rdx
  HRESULT (__stdcall *CreateCubicBezierLinearTransition)(IUIAnimationTransitionLibrary2 *, UI_ANIMATION_SECONDS, DOUBLE, DOUBLE, DOUBLE, DOUBLE, DOUBLE, IUIAnimationTransition2 **); // rbx
  __int64 v26; // rdx
  struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *v27; // [rsp+40h] [rbp-C8h]
  struct CSecondaryWindowRepresentation *v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h]
  _BYTE v31[240]; // [rsp+78h] [rbp-90h] BYREF
  LPVOID ppv; // [rsp+188h] [rbp+80h] BYREF

  ppv = this;
  if ( a8 > 4 )
    return 2147942450LL;
  if ( a5 <= 0.0 )
    return 2147942487LL;
  if ( (unsigned int)a11 >= a8 )
    return 2147942487LL;
  v18 = a7[(unsigned int)a11];
  v19 = a6[(unsigned int)a11];
  if ( v18 == v19 )
    return 2147942487LL;
  v20 = a9 ? *a9 : a6[(unsigned int)a11];
  v21 = a10 ? *a10 : a7[(unsigned int)a11];
  if ( v20 != v21 && v18 > v19 == v20 > v21 )
    return 2147942487LL;
  if ( v18 > v19 == v19 > v20 && v18 > v19 == v21 > v19 )
    v20 = a6[(unsigned int)a11];
  if ( v18 > v19 == v18 > v20 && v18 > v19 == v21 > v18 )
    v21 = a7[(unsigned int)a11];
  LODWORD(v28) = (_DWORD)a11;
  CThemeAnimationScheduleHelper::CCubicBezierChopper::CCubicBezierChopper(
    (CThemeAnimationScheduleHelper::CCubicBezierChopper *)v31,
    a2,
    a3,
    a4,
    a6,
    a7,
    a8,
    v27,
    v20,
    v21,
    v28);
  ppv = 0LL;
  v23 = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 3u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, &ppv);
  if ( v23 >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 72LL))(ppv, v22, 0LL);
    if ( v23 >= 0 )
    {
      v29 = 0LL;
      v23 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, v24, &v29);
      if ( v23 >= 0 )
      {
        a16 = 0LL;
        v23 = (*(__int64 (__fastcall **)(LPVOID, struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 **))(*(_QWORD *)ppv + 48LL))(
                ppv,
                &a16);
        if ( v23 >= 0 )
        {
          CreateCubicBezierLinearTransition = a4->lpVtbl->CreateCubicBezierLinearTransition;
          v30 = 0LL;
          v23 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionLibrary2 *))CreateCubicBezierLinearTransition)(a4);
          if ( v23 >= 0 )
          {
            v23 = (*(__int64 (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *, __int64, __int64))(*(_QWORD *)&a16->_ + 24LL))(
                    a16,
                    v29,
                    v30);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
            if ( v23 >= 0 )
              v23 = (*(__int64 (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *, __int64, _QWORD))(*(_QWORD *)&a16->_ + 96LL))(
                      a16,
                      v26,
                      0LL);
          }
          (*(void (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *))(*(_QWORD *)&a16->_ + 16LL))(a16);
          if ( v23 >= 0 )
            v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 48LL))(v29, v31);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper((CThemeAnimationScheduleHelper::CCubicBezierChopper *)v31);
  return (unsigned int)v23;
}
