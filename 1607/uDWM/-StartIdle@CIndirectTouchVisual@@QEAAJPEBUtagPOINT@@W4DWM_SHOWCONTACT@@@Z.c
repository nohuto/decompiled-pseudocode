/*
 * XREFs of ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F9D8
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006F968 (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FE2C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800915F0 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800916B0 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x18009178C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StartIdle(__int64 a1)
{
  CIndirectTouchVisual *v2; // rcx
  int v3; // r8d
  const struct tagPOINT *v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  int v9; // edi
  CIndirectTouchVisual *v10; // rcx

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *((_DWORD *)v2 + 83) = v3;
  CIndirectTouchVisual::UpdateLocation(v2, v4);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v5 )
    v5 = CTimeline<float>::CTimeline<float>((__int64)v5, *(float *)(a1 + 312), (float)*(int *)(a1 + 328), 0.0, 0);
  *(_QWORD *)(a1 + 336) = v5;
  if ( !v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xA7u);
    goto LABEL_19;
  }
  if ( *(float *)(a1 + 316) == 0.0 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     80LL);
    if ( v6 )
      v6 = CTimeline<float>::CTimeline<float>((__int64)v6, *(float *)(a1 + 312), *(float *)(a1 + 324), 0.0, 0);
    *(_QWORD *)(a1 + 352) = v6;
    if ( !v6 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xAEu);
LABEL_19:
      CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
      *(_DWORD *)(a1 + 324) = 0;
      *(_DWORD *)(a1 + 328) = 0;
      CIndirectTouchVisual::UpdateOpacityAndSource(v10);
      return 0LL;
    }
  }
  else
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     80LL);
    if ( v7 )
      v7 = CTimeline<float>::CTimeline<float>(
             (__int64)v7,
             (float)(*(float *)(a1 + 312) * *(float *)(a1 + 316)),
             *(float *)(a1 + 324),
             *(float *)(a1 + 324),
             0);
    *(_QWORD *)(a1 + 344) = v7;
    if ( !v7 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xB3u);
      goto LABEL_19;
    }
  }
  v8 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v9 = v8;
  if ( v8 >= 0 )
    CIndirectTouchVisual::SetETWAnimation(a1, 1LL);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xB6u);
  if ( v9 < 0 )
    goto LABEL_19;
  return 0LL;
}
