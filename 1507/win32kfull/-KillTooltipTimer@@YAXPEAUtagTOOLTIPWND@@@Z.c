/*
 * XREFs of ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C007B230
 * Callers:
 *     xxxResetTooltip @ 0x1C007B17C (xxxResetTooltip.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0121BE0 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 */

void __fastcall KillTooltipTimer(struct tagTOOLTIPWND *a1)
{
  __int64 v1; // rax

  v1 = *((unsigned int *)a1 + 101);
  if ( (_DWORD)v1 )
  {
    *((_DWORD *)a1 + 101) = 0;
    FindTimer((__int64)a1, v1, 2u, 1, 0LL);
  }
}
