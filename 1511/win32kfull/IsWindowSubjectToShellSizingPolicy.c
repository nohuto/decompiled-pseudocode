/*
 * XREFs of IsWindowSubjectToShellSizingPolicy @ 0x1C020B4D0
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0209F54 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006F5AC (IsShellWndManagementBehaviorEnabled.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C0205BE8 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsWindowSubjectToShellSizingPolicy(struct tagWND *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = 0;
  if ( IsLeftOrRightArranged(a1) && !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(v1 + 24), 8) )
    return (unsigned int)IsWindowSubjectToShellWindowBehavior(v4, 64LL, v3) != 0;
  return v2;
}
