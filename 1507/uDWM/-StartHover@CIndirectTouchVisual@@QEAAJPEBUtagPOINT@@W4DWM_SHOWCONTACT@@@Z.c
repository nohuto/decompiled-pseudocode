/*
 * XREFs of ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F938
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180080A2C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180088E8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x18008F730 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FCF0 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008FDEC (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FE5C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StartHover(__int64 a1)
{
  CIndirectTouchVisual *v2; // rcx
  int v3; // r9d
  const struct tagPOINT *v4; // r10
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  int v7; // eax
  int v8; // ebx
  CIndirectTouchVisual *v9; // rcx

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *((_DWORD *)v2 + 83) = v3;
  CIndirectTouchVisual::UpdateLocation(v2, v4);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v5 )
    v5 = CTimeline<float>::CTimeline<float>((__int64)v5, *(float *)(a1 + 308), (float)*(int *)(a1 + 328), 0.0, 0);
  *(_QWORD *)(a1 + 336) = v5;
  if ( !v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x99u);
    goto LABEL_14;
  }
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v6 )
    v6 = CTimeline<float>::CTimeline<float>((__int64)v6, *(float *)(a1 + 308), *(float *)(a1 + 324), 1.0, 0);
  *(_QWORD *)(a1 + 352) = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x9Cu);
LABEL_14:
    CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
    *(_DWORD *)(a1 + 328) = 0;
    *(_DWORD *)(a1 + 324) = 1065353216;
    CIndirectTouchVisual::UpdateOpacityAndSource(v9);
    return 0LL;
  }
  v7 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v8 = v7;
  if ( v7 >= 0 )
    CIndirectTouchVisual::SetETWAnimation(a1, 2);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x9Eu);
  if ( v8 < 0 )
    goto LABEL_14;
  return 0LL;
}
