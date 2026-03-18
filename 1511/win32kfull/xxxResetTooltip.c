/*
 * XREFs of xxxResetTooltip @ 0x1C00C75D4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C7394 (xxxCancelMouseMoveTracking.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014A340 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00C7688 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
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
    xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 151, 1);
    MessageWindow = GetMessageWindow((__int64)a1);
    v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v6;
    v6[1] = MessageWindow;
    ++*(_DWORD *)(MessageWindow + 8);
    xxxSetParentWorker(a1, MessageWindow, 0LL);
    ThreadUnlock1(v5, v4);
  }
  *((_QWORD *)a1 + 50) = 0LL;
  *((_QWORD *)a1 + 51) = 0LL;
  *((_QWORD *)a1 + 52) = 0LL;
  result = *((_QWORD *)a1 + 3);
  *(_DWORD *)(result + 32) &= 0xFFFFFCFF;
  return result;
}
