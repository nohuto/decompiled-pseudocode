/*
 * XREFs of IsThreadHung @ 0x1C008C3A4
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000C140 (xxxSwitchToThisWindow.c)
 *     DoExplorerHangDetection @ 0x1C000C19C (DoExplorerHangDetection.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     IsHungWindow @ 0x1C008C360 (IsHungWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxQueryInformationThread @ 0x1C00CE3F8 (xxxQueryInformationThread.c)
 *     _GetWindowTrackInfoAsync @ 0x1C01025C0 (_GetWindowTrackInfoAsync.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C020268C (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadHung(_QWORD *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a2 )
    a2 = gdwHungAppTimeout;
  v4 = a1[50];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) > a2
    && (*(_WORD *)(v4 + 10) & 0x1C07) == 0
    && !(unsigned int)PsGetThreadFreezeCount(*a1)
    && (*(_BYTE *)(a1[47] + 12LL) & 0x40) == 0 )
  {
    return 1;
  }
  return v3;
}
