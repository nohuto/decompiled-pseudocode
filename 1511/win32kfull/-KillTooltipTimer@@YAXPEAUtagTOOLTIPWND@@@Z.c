/*
 * XREFs of ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00C7688
 * Callers:
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00C76BC (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 */

void __fastcall KillTooltipTimer(struct tagTOOLTIPWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 101);
  if ( v1 )
  {
    *((_DWORD *)a1 + 101) = 0;
    FindTimer((_DWORD)a1, v1, 2, 1, 0LL);
  }
}
