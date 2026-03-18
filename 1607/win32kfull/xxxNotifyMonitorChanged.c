/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C00AEA64
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0053B90 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00B2504 (xxxEnableChildWindowDpiMessageX.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00AEEB4 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00B0260 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, __int64 a2, struct tagBWL *a3)
{
  unsigned __int16 v5; // r9
  struct tagRECT *v6; // r10

  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( (*((_DWORD *)a1 + 88) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 568LL) & 0x2000000) == 0 )
      xxxSendDpiChangedMsgs(a1, v6, a3, v5);
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 13) )
    {
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x18u, *(_QWORD *)a1);
    }
    else if ( (unsigned int)IsTrayWindow((__int64)a1) )
    {
      PostShellHookMessagesEx(0x10u, *(_QWORD *)a1, 0LL);
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x14u, *(_QWORD *)a1);
      xxxCallHook(0x10u, *(_QWORD *)a1, 0LL, 0xAu);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
