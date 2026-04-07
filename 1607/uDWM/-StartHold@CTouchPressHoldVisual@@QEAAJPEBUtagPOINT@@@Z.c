/*
 * XREFs of ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180098C90
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FE2C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x180098A94 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x180098F48 (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x180098FEC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800997B4 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartHold(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  _QWORD *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  int v9; // edi
  CTouchPressHoldVisual *v10; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  *(_QWORD *)(v4 + 284) = *v3;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v4);
  v5 = *(_QWORD *)((char *)this + 292);
  *((_DWORD *)this + 77) = 0;
  *(_QWORD *)((char *)this + 300) = v5;
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v6 )
    v6 = CTimeline<float>::CTimeline<float>((__int64)v6, 0.1500000059604645, 0.0, 1.0, 0);
  *((_QWORD *)this + 40) = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
    goto LABEL_14;
  }
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v7 )
    v7 = CTimeline<float>::CTimeline<float>((__int64)v7, 0.1500000059604645, 0.25, 1.0, 0);
  *((_QWORD *)this + 41) = v7;
  if ( !v7 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x47u);
LABEL_14:
    CTouchPressHoldVisual::StopAllTimelines(this);
    *(_QWORD *)((char *)this + 300) = *(_QWORD *)((char *)this + 292);
    *((_DWORD *)this + 78) = 1065353216;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(v10);
    return 0LL;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  v9 = v8;
  if ( v8 >= 0 )
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 1);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x49u);
  if ( v9 < 0 )
    goto LABEL_14;
  return 0LL;
}
