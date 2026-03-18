/*
 * XREFs of NtUserSetProcessDefaultLayout @ 0x1402554E0
 * Callers:
 *     <none>
 * Callees:
 *     _SetProcessDefaultLayout @ 0x140295DFC (_SetProcessDefaultLayout.c)
 */

__int64 __fastcall NtUserSetProcessDefaultLayout(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)SetProcessDefaultLayout(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
