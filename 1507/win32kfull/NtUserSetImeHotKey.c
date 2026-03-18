/*
 * XREFs of NtUserSetImeHotKey @ 0x1C014BB60
 * Callers:
 *     <none>
 * Callees:
 *     SetImeHotKey @ 0x1C014BBC0 (SetImeHotKey.c)
 */

__int64 __fastcall NtUserSetImeHotKey(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCrit(1LL);
  v6 = SetImeHotKey(a1, a5);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
