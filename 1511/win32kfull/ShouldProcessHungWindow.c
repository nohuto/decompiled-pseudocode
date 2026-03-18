/*
 * XREFs of ShouldProcessHungWindow @ 0x1C010BFEC
 * Callers:
 *     NtUserQueryWindow @ 0x1C008C050 (NtUserQueryWindow.c)
 *     ProcessHungWindow @ 0x1C014260C (ProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0142654 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     IsHungWindow @ 0x1C008C360 (IsHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C010C060 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
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
