/*
 * XREFs of NtUserSetKeyboardState @ 0x1C00EE420
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _SetKeyboardState @ 0x1C00EE474 (_SetKeyboardState.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v5; // [rsp+20h] [rbp-28h]

  EnterCrit(1LL);
  v5 = SetKeyboardState(a1);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v5;
}
