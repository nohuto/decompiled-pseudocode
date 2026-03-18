/*
 * XREFs of IsWindowSubjectToShellSizingPolicy @ 0x1C02025E0
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0201038 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009E988 (IsShellWndManagementBehaviorEnabled.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01FCEE4 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsWindowSubjectToShellSizingPolicy(struct tagWND *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = 0;
  if ( IsLeftOrRightArranged(a1) && !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(v1 + 24), 8) )
    return (unsigned int)IsWindowSubjectToShellWindowBehavior(v3, 64LL) != 0;
  return v2;
}
