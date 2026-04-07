/*
 * XREFs of ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180098E00
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

__int64 __fastcall CTouchPressHoldVisual::StartRightTap(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // eax
  int v8; // edi
  __int64 v9; // rax
  CTouchPressHoldVisual *v10; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *(_DWORD *)(v5 + 308) = 0;
  *(_QWORD *)(v5 + 284) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v5);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v6 )
    v6 = CTimeline<float>::CTimeline<float>((__int64)v6, 0.1500000059604645, 1.0, 0.0, 0);
  *((_QWORD *)this + 40) = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x63u);
LABEL_9:
    CTouchPressHoldVisual::StopAllTimelines(this);
    v9 = *(_QWORD *)((char *)this + 292);
    *((_DWORD *)this + 78) = 0;
    *((_DWORD *)this + 77) = 0;
    *(_QWORD *)((char *)this + 300) = v9;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(v10);
    return 0LL;
  }
  v7 = CTouchVisual::RegisterGlobalTimer(this);
  v8 = v7;
  if ( v7 >= 0 )
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 2);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x65u);
  if ( v8 < 0 )
    goto LABEL_9;
  return 0LL;
}
