/*
 * XREFs of ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F6D00
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C01F6FA4 (xxxFrostCrashedWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 */

__int64 __fastcall _ShouldFrostCrashedWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // eax

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (unsigned int)IsTopLevelWindow(v4)
    && *(_QWORD *)(v1 + 416) == grpdeskRitInput
    && *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) != *(_WORD *)(gpsi + 884LL)
    && (*(_DWORD *)(v5 + 12) & 0x8000000) == 0
    && *(_QWORD *)v5 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(*(_QWORD *)v5)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 384)) )
  {
    v6 = 0;
    if ( *(_DWORD *)(v1 + 560) <= 0x9900u )
      v6 = *(_DWORD *)(v1 + 576);
    if ( (v6 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      return 1;
  }
  return v3;
}
