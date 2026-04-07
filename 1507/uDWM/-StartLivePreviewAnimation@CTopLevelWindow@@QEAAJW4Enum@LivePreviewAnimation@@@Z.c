/*
 * XREFs of ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800762DC
 * Callers:
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x180069CE0 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18006A518 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18006A63C (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000831C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180025000 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180046D24 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800681CC (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18006B8F8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180075BE8 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::StartLivePreviewAnimation(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  struct CVisual *v4; // rcx
  int v5; // ecx
  double AnimationDuration; // xmm6_8
  CLivePreviewTimeline *v7; // rax
  CLivePreviewTimeline *v8; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 272) = a2;
  if ( !(unsigned __int8)CTopLevelWindow::HasAnimation((CTopLevelWindow *)a1) )
    CDesktopManager::RegisterForGlobalTimeChangeNotification(v4);
  ++*(_DWORD *)(a1 + 268);
  v5 = 3;
  AnimationDuration = 0.0;
  if ( *(_DWORD *)(a1 + 272) == 3 )
  {
    v5 = 2;
LABEL_7:
    AnimationDuration = CLivePreview::GetAnimationDuration(v5);
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a1 + 272) == 4 )
    goto LABEL_7;
LABEL_8:
  if ( *(_QWORD *)(a1 + 696)
    || ((v7 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 16LL))(
                                        WPF::g_pProcessHeap,
                                        96LL)) == 0LL
      ? (v8 = 0LL)
      : (v8 = CLivePreviewTimeline::CLivePreviewTimeline(v7)),
        (*(_QWORD *)(a1 + 696) = v8) != 0LL) )
  {
    CLivePreviewTimeline::RestartTimeline(*(_QWORD *)(a1 + 696), *(_DWORD *)(a1 + 272), AnimationDuration);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1289u);
    CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)a1);
  }
  return v3;
}
