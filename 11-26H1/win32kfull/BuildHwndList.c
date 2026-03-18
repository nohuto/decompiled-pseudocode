/*
 * XREFs of BuildHwndList @ 0x1400510F0
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140004EE4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxDWP_UpdateUIState @ 0x140041D68 (xxxDWP_UpdateUIState.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x140121918 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14012A150 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x14015D1C8 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E754 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x140178CEC (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140198198 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1401C0368 (xxxShowOwnedWindows.c)
 *     xxxClientShutdown @ 0x1401C7E58 (xxxClientShutdown.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxInternalEnumWindow @ 0x1401F90C4 (xxxInternalEnumWindow.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x140201784 (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 *     NtUserBuildHwndList @ 0x14020DC00 (NtUserBuildHwndList.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x140218948 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x140225050 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1402417DC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x14026CBFC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1402A1DF8 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1402A22C0 (xxxForceWindowToDpiForTest.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1402ACA20 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1402FAF24 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x140051410 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 */

struct tagBWL *__fastcall BuildHwndList(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v7; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  struct tagBWL *v13; // rbx
  _QWORD *v14; // rax
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax

  v4 = 0LL;
  v7 = a2;
  if ( a4 == 1 && (v11 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63424)) != 0 )
  {
    *(_QWORD *)(W32GetUserSessionState(v10, v9) + 63424) = 0LL;
  }
  else
  {
    v23 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v11 = v23;
    if ( !v23 )
      return 0LL;
    *(_QWORD *)(v23 + 16) = v23 + 280;
  }
  *(_QWORD *)(v11 + 24) = a3;
  *(_QWORD *)(v11 + 8) = v11 + 32;
  v13 = InternalBuildHwndList((struct tagBWL *)v11, a1, v7);
  v14 = (_QWORD *)*((_QWORD *)v13 + 1);
  if ( (unsigned __int64)v14 >= *((_QWORD *)v13 + 2) )
  {
    Win32FreePool(v13);
    return 0LL;
  }
  *v14 = 1LL;
  if ( (v7 & 8) != 0 )
    v13 = InternalRebuildHwndListForIMEClass(v13);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v12);
  if ( CurrentThreadWin32Thread )
    v17 = *CurrentThreadWin32Thread;
  else
    v17 = 0LL;
  *((_QWORD *)v13 + 3) = v17;
  if ( a4 )
  {
    v18 = (__int64 *)PsGetCurrentThreadWin32Thread(v17);
    if ( v18 )
      v4 = *v18;
    *((_QWORD *)v13 + 3) = v4;
    v21 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 63232);
    *(_QWORD *)v13 = v21;
    *(_QWORD *)(W32GetUserSessionState(v21, v22) + 63232) = v13;
  }
  else
  {
    *(_QWORD *)v13 = 3LL;
  }
  return v13;
}
