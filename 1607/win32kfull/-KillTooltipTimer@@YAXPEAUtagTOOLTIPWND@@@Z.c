/*
 * XREFs of ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011F82C
 * Callers:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C011F72C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C011F778 (xxxResetTooltip.c)
 * Callees:
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

void __fastcall KillTooltipTimer(struct tagTOOLTIPWND *a1)
{
  __int64 v1; // rax

  v1 = *((unsigned int *)a1 + 97);
  if ( (_DWORD)v1 )
  {
    *((_DWORD *)a1 + 97) = 0;
    FindTimer((__int64)a1, v1, 2u, 1, 0LL);
  }
}
