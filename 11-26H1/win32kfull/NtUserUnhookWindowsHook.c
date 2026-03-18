/*
 * XREFs of NtUserUnhookWindowsHook @ 0x1402C0750
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x1402A3C28 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 */

__int64 __fastcall NtUserUnhookWindowsHook(unsigned int a1, __int64 (*a2)(void))
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterSharedCrit(0LL, 1LL);
  v4 = (int)zzzUnhookWindowsHook(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
