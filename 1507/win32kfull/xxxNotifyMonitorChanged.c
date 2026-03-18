/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C007E314
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0045678 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0058BB0 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C007C5B0 (xxxEnableChildWindowDpiMessageX.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     ?xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C007DE64 (-xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent@@YAXQEAUtagWND@@@Z @ 0x1C007E0AC (-TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0081088 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, __int64 a2, struct tagBWL *a3)
{
  unsigned __int16 v5; // r9
  struct tagRECT *v6; // r10
  int v7; // eax

  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( *((_DWORD *)a1 + 86) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 576LL) & 0x2000000) == 0 )
    {
      *((_DWORD *)a1 + 92) |= 1u;
      xxxSendDpiChangedMsgs(a1, v6, a3, v5);
      v7 = *((_DWORD *)a1 + 92);
      if ( (v7 & 1) != 0 )
      {
        *((_DWORD *)a1 + 92) = v7 & 0xFFFFFFFE;
        TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent(a1);
      }
    }
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 13) )
    {
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 24, *(_QWORD *)a1);
    }
    else if ( (unsigned int)IsTrayWindow((__int64)a1) )
    {
      PostShellHookMessagesEx(0x10uLL, *(_QWORD *)a1, 0LL);
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 20, *(_QWORD *)a1);
      xxxCallHook(16, *(_QWORD *)a1, 0LL, 0xAu);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
