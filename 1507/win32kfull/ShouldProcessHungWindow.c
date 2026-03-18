/*
 * XREFs of ShouldProcessHungWindow @ 0x1C00FF760
 * Callers:
 *     NtUserQueryWindow @ 0x1C0085DC0 (NtUserQueryWindow.c)
 *     ProcessHungWindow @ 0x1C01176A8 (ProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C01176F0 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     IsHungWindow @ 0x1C008CD50 (IsHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00FF7D0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rdi
  __int64 v5; // rcx

  v1 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow
    && IsHungWindow(TopLevelWindow)
    && (unsigned int)_ShouldGhostWindow(v3)
    && !GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 884LL), 1LL)
    && !(unsigned int)GetWindowCloakState(v5) )
  {
    return v3;
  }
  return (struct tagWND *)v1;
}
