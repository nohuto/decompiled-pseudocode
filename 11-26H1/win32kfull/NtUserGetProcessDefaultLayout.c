/*
 * XREFs of NtUserGetProcessDefaultLayout @ 0x140252760
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessDefaultLayout @ 0x14029185C (_GetProcessDefaultLayout.c)
 */

__int64 __fastcall NtUserGetProcessDefaultLayout(__int64 a1)
{
  __int64 ProcessDefaultLayout; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  ProcessDefaultLayout = (int)GetProcessDefaultLayout(a1);
  UserSessionSwitchLeaveCrit(v3);
  return ProcessDefaultLayout;
}
