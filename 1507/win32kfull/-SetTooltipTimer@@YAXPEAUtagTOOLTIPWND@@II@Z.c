/*
 * XREFs of ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0121BE0
 * Callers:
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0120BC4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0079ECC (_SetSystemTimer.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C007B230 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

void __fastcall SetTooltipTimer(struct tagTOOLTIPWND *a1, int a2, int a3)
{
  KillTooltipTimer(a1);
  *((_DWORD *)a1 + 101) = a2;
  SetSystemTimer((__int64)a1, a2, a3, 0, 1);
}
