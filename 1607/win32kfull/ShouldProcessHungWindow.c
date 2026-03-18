/*
 * XREFs of ShouldProcessHungWindow @ 0x1C00D5530
 * Callers:
 *     ProcessHungWindow @ 0x1C00D5348 (ProcessHungWindow.c)
 *     NtUserQueryWindow @ 0x1C00D53A0 (NtUserQueryWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C014819C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00D55A4 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rdi

  v1 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow
    && IsHungWindow(TopLevelWindow)
    && (unsigned int)_ShouldGhostWindow(v3)
    && !GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 884LL), 1LL)
    && !(unsigned int)GetWindowCloakState((__int64)v3) )
  {
    return v3;
  }
  return (struct tagWND *)v1;
}
