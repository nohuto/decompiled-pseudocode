/*
 * XREFs of NtUserGetCursorPos @ 0x1401AB730
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxGetCursorPos@@YAHV?$UserModePointer@UtagPOINT@@@@K@Z @ 0x1401AB780 (-xxxGetCursorPos@@YAHV-$UserModePointer@UtagPOINT@@@@K@Z.c)
 */

__int64 __fastcall NtUserGetCursorPos(__int64 a1, unsigned int a2)
{
  __int64 CursorPos; // rbx
  __int64 v5; // rcx

  EnterSharedCrit(0LL, 1LL);
  CursorPos = (int)xxxGetCursorPos(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return CursorPos;
}
