/*
 * XREFs of ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009AA50
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

__int64 __fastcall CTouchPressHoldVisual::StartRightTap(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  CTouchPressHoldVisual *v11; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *(_DWORD *)(v5 + 308) = 0;
  *(_QWORD *)(v5 + 284) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v5);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v6 )
    v6 = CTimeline<float>::CTimeline<float>((__int64)v6, *((float *)this + 93), 1.0, 0.0, 0);
  *((_QWORD *)this + 40) = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x98u);
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 88) )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     80LL);
    if ( v7 )
      v7 = CTimeline<float>::CTimeline<float>((__int64)v7, *((float *)this + 93), 0.0, (float)*((int *)this + 88), 0);
    *((_QWORD *)this + 42) = v7;
    if ( !v7 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x9Cu);
LABEL_15:
      CTouchPressHoldVisual::StopAllTimelines(this);
      v10 = *((_DWORD *)this + 88);
      *((_DWORD *)this + 78) = 0;
      *((_DWORD *)this + 77) = v10;
      *(_QWORD *)((char *)this + 300) = *(_QWORD *)((char *)this + 292);
      CTouchPressHoldVisual::UpdateOpacityAndLocation(v11);
      return 0LL;
    }
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  v9 = v8;
  if ( v8 >= 0 )
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 2);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x9Fu);
  if ( v9 < 0 )
    goto LABEL_15;
  return 0LL;
}
