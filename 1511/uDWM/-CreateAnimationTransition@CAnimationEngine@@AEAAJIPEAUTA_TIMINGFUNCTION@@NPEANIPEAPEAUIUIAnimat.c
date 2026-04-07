/*
 * XREFs of ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800370C0
 * Callers:
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180037200 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     Template_qffff @ 0x18008F4AC (Template_qffff.c)
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x180090DD0 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 */

__int64 __fastcall CAnimationEngine::CreateAnimationTransition(
        struct IUIAnimationTransitionFactory2 **this,
        __int64 a2,
        struct TA_TIMINGFUNCTION *a3,
        double a4,
        double *a5,
        unsigned int a6,
        struct IUIAnimationTransition2 **a7)
{
  int v8; // ebp
  float v9; // xmm2_4
  float v10; // xmm1_4
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r9d
  unsigned int v15; // ebx
  int Transition; // eax
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r9d

  v8 = a2;
  if ( *(_DWORD *)a3 == 1 )
  {
    v9 = *((float *)a3 + 2);
    if ( v9 < 0.0 || v9 > 1.0 || (v10 = *((float *)a3 + 4), v10 < 0.0) || v10 > 1.0 )
    {
      Transition = CCubicBezierInterpolator::CreateTransition(
                     this[3],
                     a4,
                     a5,
                     a6,
                     *((float *)a3 + 1),
                     v9,
                     *((float *)a3 + 3),
                     *((float *)a3 + 4),
                     a7);
      v15 = Transition;
      if ( Transition < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Transition, 0x529u);
        return v15;
      }
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, __int64, double *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct IUIAnimationTransition2 **))this[2]->lpVtbl[5].AddRef)(
              this[2],
              a2,
              a5,
              a6,
              *((float *)a3 + 1),
              v9,
              *((float *)a3 + 3),
              v10,
              a7);
      v15 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x534u);
        return v15;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qffff(v13, v12, v8, v14, *((_DWORD *)a3 + 2), *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4));
  }
  else
  {
    v18 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, __int64, double *, _QWORD, struct IUIAnimationTransition2 **))this[2]->lpVtbl[2].AddRef)(
            this[2],
            a2,
            a5,
            a6,
            a7);
    v15 = v18;
    if ( v18 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_qffff(v20, v19, v8, v21, 0, SLOBYTE(FLOAT_1_0), SLOBYTE(FLOAT_1_0));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x53Eu);
    }
  }
  return v15;
}
