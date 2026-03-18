/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C00910C0
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x1C00910EC (_GetThreadDesktop.c)
 */

__int64 __fastcall NtUserGetThreadDesktop(unsigned int a1)
{
  __int64 ThreadDesktop; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterSharedCrit(1LL);
  ThreadDesktop = GetThreadDesktop(a1);
  UserSessionSwitchLeaveCrit(v4, v3);
  return ThreadDesktop;
}
