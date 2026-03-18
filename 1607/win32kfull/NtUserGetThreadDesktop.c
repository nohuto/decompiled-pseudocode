/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C0057320
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x1C0057350 (_GetThreadDesktop.c)
 */

__int64 __fastcall NtUserGetThreadDesktop(unsigned int a1)
{
  __int64 ThreadDesktop; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterSharedCrit(0LL, 1LL);
  ThreadDesktop = GetThreadDesktop(a1);
  UserSessionSwitchLeaveCrit(v4, v3);
  return ThreadDesktop;
}
