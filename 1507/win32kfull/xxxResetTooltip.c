/*
 * XREFs of xxxResetTooltip @ 0x1C007B17C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C007AECC (xxxCancelMouseMoveTracking.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0120BC4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C007B230 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxResetTooltip(struct tagWND *a1)
{
  __int64 result; // rax
  __int64 MessageWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  KillTooltipTimer(a1);
  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    xxxSetWindowPosAndBand(a1, 0, 0, 151, 1);
    MessageWindow = GetMessageWindow((__int64)a1);
    v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v6;
    v6[1] = MessageWindow;
    ++*(_DWORD *)(MessageWindow + 8);
    xxxSetParentWorker(a1, MessageWindow);
    ThreadUnlock1(v5, v4);
  }
  *((_QWORD *)a1 + 50) = 0LL;
  *((_QWORD *)a1 + 51) = 0LL;
  *((_QWORD *)a1 + 52) = 0LL;
  result = *((_QWORD *)a1 + 3);
  *(_DWORD *)(result + 32) &= 0xFFFFFCFF;
  return result;
}
