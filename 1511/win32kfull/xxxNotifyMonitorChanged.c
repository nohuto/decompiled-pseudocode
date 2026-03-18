/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C0091974
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0069CF0 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0092C74 (xxxEnableChildWindowDpiMessageX.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0091A7C (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0091B34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent@@YAXQEAUtagWND@@@Z @ 0x1C0091D88 (-TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent@@YAXQEAUtagWND@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, __int64 a2, struct tagBWL *a3)
{
  unsigned __int16 v5; // r9
  struct tagRECT *v6; // r10
  int v7; // eax
  int v8; // ecx

  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( *((_DWORD *)a1 + 86) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 568LL) & 0x2000000) == 0 )
    {
      *((_DWORD *)a1 + 92) |= 1u;
      v7 = xxxSendDpiChangedMsgs(a1, v6, a3, v5);
      v8 = *((_DWORD *)a1 + 92);
      if ( (v8 & 1) != 0 )
      {
        *((_DWORD *)a1 + 92) = v8 & 0xFFFFFFFE;
        if ( v7 )
          TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent(a1);
      }
    }
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
