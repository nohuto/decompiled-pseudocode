/*
 * XREFs of NtUserSetWaitForQueueAttach @ 0x1402BE390
 * Callers:
 *     <none>
 * Callees:
 *     _SetWaitForQueueAttach @ 0x140258310 (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserSetWaitForQueueAttach(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)SetWaitForQueueAttach(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
