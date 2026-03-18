/*
 * XREFs of xxxNotifyMonitorChanged @ 0x14004BDFC
 * Callers:
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x14024B060 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402613D0 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14026F0F4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1402A22C0 (xxxForceWindowToDpiForTest.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1400102EC (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140046530 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401EC228 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x14026CBFC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x1402948FC (-RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1402A1DF8 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  int v8; // eax
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int16 ScaledLogPixels; // bx

  v8 = IsTopLevelWindow(a1, a2);
  v9 = v8;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 && v8 )
    SetDeferredDpiStateForWindowAndChildren((__int64 *)a1, 0LL, 0);
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( (_DWORD)v10 == 2 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 680LL) & 0x2000000) == 0 )
    {
      xxxSendDpiChangedMsgs(a1, a2, a3, a4);
      goto LABEL_17;
    }
  }
  else if ( (_DWORD)v10 == 3 )
  {
    xxxConsiderPreferredDpiChange(a1);
    goto LABEL_17;
  }
  if ( PtiCurrent(v10) )
  {
    if ( *((_QWORD *)PtiCurrent(v11) + 61) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v12) + 61) + 8LL) + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000 )
      {
        if ( (unsigned int)IsTopLevelWindow(a1, v13) )
        {
          if ( !a4
            || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v14 + 284)),
                (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
          {
            xxxSendGDIScaledDpiChangedMsgs(a1, a3);
          }
        }
      }
    }
  }
LABEL_17:
  if ( v9 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      PostIAMShellHookMessage(0x18u, *(_QWORD *)a1);
    }
    else if ( IsTrayWindow(a1, 1LL) )
    {
      PostShellHookMessagesEx((LastWokenThread *)0x10, *(_QWORD *)a1);
      PostIAMShellHookMessage(0x14u, *(_QWORD *)a1);
      xxxCallHook(16LL, *(_QWORD *)a1, 0LL, 10);
    }
  }
  RecreateRedirectionBitmapIfAdapterChanged(a1);
  if ( a3 )
    FreeHwndList(a3);
}
