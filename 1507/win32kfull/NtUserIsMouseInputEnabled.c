/*
 * XREFs of NtUserIsMouseInputEnabled @ 0x1C021D290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 NtUserIsMouseInputEnabled()
{
  BOOL v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(1LL);
  v0 = ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0;
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
