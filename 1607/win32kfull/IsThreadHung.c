/*
 * XREFs of IsThreadHung @ 0x1C00596C4
 * Callers:
 *     DoExplorerHangDetection @ 0x1C000D200 (DoExplorerHangDetection.c)
 *     xxxSwitchToThisWindow @ 0x1C000D420 (xxxSwitchToThisWindow.c)
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     xxxQueryInformationThread @ 0x1C0096AA8 (xxxQueryInformationThread.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0098B90 (_GetWindowTrackInfoAsync.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00A9ED8 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F99A8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
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
