/*
 * XREFs of FreeHwndList @ 0x140051630
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140004EE4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxDWP_UpdateUIState @ 0x140041D68 (xxxDWP_UpdateUIState.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxInternalDoSyncPaint @ 0x14004FFD0 (xxxInternalDoSyncPaint.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x140121918 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14012A150 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x14015D1C8 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E754 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
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
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1402ACA20 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1402FAF24 (xxxArrangeIconicWindows.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHwndList(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *i; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax

  if ( *a1 == 3LL )
  {
LABEL_9:
    v12 = a1;
LABEL_10:
    Win32FreePool(v12);
  }
  else
  {
    for ( i = (_QWORD *)(W32GetUserSessionState(a1, a2) + 63232); *i; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == a1 )
      {
        *i = *a1;
        if ( !*(_QWORD *)(W32GetUserSessionState(i, v3) + 63424) )
        {
          *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63424) = a1;
          return;
        }
        v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63424);
        v10 = (*(_QWORD *)(v7 + 16) - *(_QWORD *)(W32GetUserSessionState(v9, v8) + 63424) - 32LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( (__int64)((a1[2] - (_QWORD)a1 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > v10 )
        {
          v13 = *(void **)(W32GetUserSessionState(v11, v10) + 63424);
          UserSessionState = W32GetUserSessionState(v15, v14);
          v12 = v13;
          *(_QWORD *)(UserSessionState + 63424) = a1;
          goto LABEL_10;
        }
        goto LABEL_9;
      }
    }
  }
}
