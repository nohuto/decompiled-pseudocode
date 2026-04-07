/*
 * XREFs of ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x18008D858
 * Callers:
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x180031700 (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x18008DA0C (-Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z.c)
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x18008DE30 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::CreateTransition(
        struct IUIAnimationTransitionFactory2 *a1,
        double a2,
        double *a3,
        unsigned int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        struct IUIAnimationTransition2 **a9)
{
  __int64 v12; // rdi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax

  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_DWORD *)(v12 + 72) = 0;
    *(_QWORD *)(v12 + 64) = 0LL;
    *(_QWORD *)v12 = &CCubicBezierInterpolator::`vftable';
    *(_DWORD *)(v12 + 76) = 1;
    *(double *)(v12 + 32) = a5;
    *(double *)(v12 + 40) = a6;
    *(double *)(v12 + 48) = a7;
    *(double *)(v12 + 56) = a8;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v14 = CCubicBezierInterpolator::Initialize((CCubicBezierInterpolator *)v12, a2, a3, a4);
    v13 = v14;
    if ( v14 >= 0 )
    {
      v15 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, __int64, struct IUIAnimationTransition2 **))a1->lpVtbl->CreateTransition)(
              a1,
              v12,
              a9);
      v13 = v15;
      if ( v15 >= 0 )
        return v13;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x129u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x128u);
    }
    CCubicBezierInterpolator::Release((CCubicBezierInterpolator *)v12);
    return v13;
  }
  v13 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x126u);
  return v13;
}
