/*
 * XREFs of NtUserSetImeHotKey @ 0x1C0118950
 * Callers:
 *     <none>
 * Callees:
 *     SetImeHotKey @ 0x1C01189B4 (SetImeHotKey.c)
 */

__int64 __fastcall NtUserSetImeHotKey(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCrit(0LL, 1LL);
  v6 = (int)SetImeHotKey(a1, a5);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
