/*
 * XREFs of ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A718
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180088E8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x18009A6A4 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x18009AC28 (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009ACDC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x18009B4EC (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartAbort(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  int v9; // ebx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  CTouchPressHoldVisual *v12; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *(_DWORD *)(v5 + 308) = 0;
  *(_QWORD *)(v5 + 284) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v5);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v6 )
    v6 = CTimeline<float>::CTimeline<float>((__int64)v6, *((float *)this + 92), 1.0, 0.0, 0);
  *((_QWORD *)this + 40) = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xBAu);
    goto LABEL_14;
  }
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v7 )
    v7 = CTimeline<float>::CTimeline<float>((__int64)v7, *((float *)this + 92), 1.0, 0.25, 0);
  *((_QWORD *)this + 41) = v7;
  if ( !v7 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xBCu);
LABEL_14:
    CTouchPressHoldVisual::StopAllTimelines(this);
    v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 73));
    v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 74));
    *((_DWORD *)this + 78) = 0;
    *((_DWORD *)this + 75) = (int)(float)(_mm_cvtepi32_ps(v10).m128_f32[0] * 0.25);
    *((_DWORD *)this + 76) = (int)(float)(_mm_cvtepi32_ps(v11).m128_f32[0] * 0.25);
    CTouchPressHoldVisual::UpdateOpacityAndLocation(v12);
    return 0LL;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  v9 = v8;
  if ( v8 >= 0 )
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 3);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xBEu);
  if ( v9 < 0 )
    goto LABEL_14;
  return 0LL;
}
