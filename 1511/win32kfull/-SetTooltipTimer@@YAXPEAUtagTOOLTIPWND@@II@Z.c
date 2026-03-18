/*
 * XREFs of ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00C76BC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014A340 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00C7688 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     _SetSystemTimer @ 0x1C00CA594 (_SetSystemTimer.c)
 */

void __fastcall SetTooltipTimer(struct tagTOOLTIPWND *a1, int a2, int a3)
{
  KillTooltipTimer(a1);
  *((_DWORD *)a1 + 101) = a2;
  SetSystemTimer((_DWORD)a1, a2, a3, 0, 1);
}
