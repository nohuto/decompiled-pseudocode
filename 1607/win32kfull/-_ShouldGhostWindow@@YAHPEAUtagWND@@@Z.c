/*
 * XREFs of ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00D55A4
 * Callers:
 *     ShouldProcessHungWindow @ 0x1C00D5530 (ShouldProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0148380 (xxxRegisterGhostWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 */

__int64 __fastcall _ShouldGhostWindow(struct tagWND *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r10
  int v6; // eax

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(v4 + 55) & 0x10) != 0
    && (unsigned int)IsTopLevelWindow(v4)
    && *(_QWORD *)(v1 + 408) == grpdeskRitInput
    && *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) != *(_WORD *)(gpsi + 884LL)
    && !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1362LL), 1LL)
    && (*(_DWORD *)(v5 + 12) & 0x8000000) == 0
    && *(_QWORD *)v5 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(*(_QWORD *)v5)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 376)) )
  {
    v6 = 0;
    if ( *(_DWORD *)(v1 + 552) <= 0x9900u )
      v6 = *(_DWORD *)(v1 + 568);
    if ( (v6 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      return 1;
  }
  return v3;
}
