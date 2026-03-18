/*
 * XREFs of NtUserModifyUserStartupInfoFlags @ 0x1C021E690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserModifyUserStartupInfoFlags(int a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCrit(1LL);
  v5 = a2 & a1 | ~a1 & *(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 768);
  *(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 768) = v5;
  UserSessionSwitchLeaveCrit(v8, v7);
  return 1LL;
}
