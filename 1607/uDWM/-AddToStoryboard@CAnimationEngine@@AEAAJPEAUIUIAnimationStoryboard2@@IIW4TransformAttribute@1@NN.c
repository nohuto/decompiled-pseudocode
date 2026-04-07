/*
 * XREFs of ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x1800118E0
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180011B38 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180010F7C (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800117F0 (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x18008DCE8 (-CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationSt.c)
 */

__int64 __fastcall CAnimationEngine::AddToStoryboard(
        __int64 a1,
        struct IUIAnimationStoryboard2 *a2,
        int a3,
        unsigned int a4,
        int a5,
        double a6,
        double a7,
        double *a8,
        double *a9,
        unsigned int a10,
        float *a11,
        unsigned int a12,
        double *a13,
        double *a14,
        unsigned int a15)
{
  __int64 v16; // rbx
  int TransitionVisualSetIndex; // eax
  double *v19; // rdi
  double v20; // xmm6_8
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  __int64 v24; // rdx
  double v25; // xmm6_8
  int v26; // eax
  int v27; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *v34; // [rsp+80h] [rbp-31h]
  char v35; // [rsp+88h] [rbp-29h]
  __int64 v36; // [rsp+90h] [rbp-21h] BYREF
  __int64 v37; // [rsp+98h] [rbp-19h] BYREF
  struct IUIAnimationTransition2 *v38; // [rsp+A0h] [rbp-11h] BYREF

  v16 = a4;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex((CAnimationEngine *)a1, a3);
  if ( TransitionVisualSetIndex < 0 )
  {
    v22 = -2147467259;
  }
  else
  {
    _mm_lfence();
    v35 = 0;
    v19 = *(double **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40)
                                                         + 8LL * (unsigned int)TransitionVisualSetIndex)
                                             + 24LL)
                                 + 8 * v16)
                     + 8LL * a5
                     + 8);
    if ( !*(_QWORD *)v19 )
    {
      v20 = 0.0;
      if ( a13 && a15 < a10 )
      {
        v20 = a8[a15];
        a8[a15] = *a13;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, double *, _QWORD, double *))(**(_QWORD **)(a1 + 8) + 24LL))(
              *(_QWORD *)(a1 + 8),
              a8,
              a10,
              v19);
      v22 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x4BBu);
        goto LABEL_14;
      }
      v35 = 1;
      if ( a13 && a15 < a10 )
        a8[a15] = v20;
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v19 + 192LL))(*(_QWORD *)v19, 0LL, a12);
    v22 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x4C5u);
      goto LABEL_14;
    }
    if ( a6 > v19[1] )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 16) + 40LL))(
              *(_QWORD *)(a1 + 16),
              v24,
              &v36);
      v22 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x4CAu);
        goto LABEL_14;
      }
      v30 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
              a2,
              *(_QWORD *)v19,
              v36);
      v22 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x4CBu);
        goto LABEL_14;
      }
      v19[1] = a6;
    }
    if ( !v35 )
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, double *, _QWORD, __int64 *))(**(_QWORD **)(a1 + 16) + 32LL))(
              *(_QWORD *)(a1 + 16),
              a8,
              a10,
              &v37);
      v22 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x4D3u);
        goto LABEL_14;
      }
      v32 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
              a2,
              *(_QWORD *)v19,
              v37);
      v22 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x4D4u);
        goto LABEL_14;
      }
    }
    if ( (a13 || a14) && *(_DWORD *)a11 == 1 )
    {
      v25 = a7;
      v33 = CThemeAnimationScheduleHelper::CreateAndAddChoppedCubicBezierTransition(
              (CThemeAnimationScheduleHelper *)a11,
              a2,
              *(struct IUIAnimationVariable2 **)v19,
              *(struct IUIAnimationTransitionLibrary2 **)(a1 + 16),
              a7,
              a8,
              a9,
              a10,
              a13,
              a14,
              a15,
              a11[1],
              a11[2],
              a11[3],
              a11[4],
              v34);
      v22 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x4F1u);
        goto LABEL_14;
      }
LABEL_13:
      v19[1] = v25 + v19[1];
      goto LABEL_14;
    }
    v25 = a7;
    v26 = CAnimationEngine::CreateAnimationTransition(
            (struct IUIAnimationTransitionFactory2 **)a1,
            a3,
            (struct TA_TIMINGFUNCTION *)a11,
            a7,
            a9,
            a10,
            &v38);
    v22 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x4DAu);
    }
    else
    {
      v27 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, struct IUIAnimationTransition2 *))a2->lpVtbl->AddTransition)(
              a2,
              *(_QWORD *)v19,
              v38);
      v22 = v27;
      if ( v27 >= 0 )
        goto LABEL_13;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x4DDu);
    }
  }
LABEL_14:
  if ( v36 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    v36 = 0LL;
  }
  if ( v37 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    v37 = 0LL;
  }
  if ( v38 )
    ((void (__fastcall *)(struct IUIAnimationTransition2 *))v38->lpVtbl->Release)(v38);
  return v22;
}
