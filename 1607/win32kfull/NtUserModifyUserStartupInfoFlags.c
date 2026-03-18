/*
 * XREFs of NtUserModifyUserStartupInfoFlags @ 0x1C02180C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserModifyUserStartupInfoFlags(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  v6 = a2 & a1 | ~a1 & *(_DWORD *)(PsGetCurrentProcessWin32Process(v5, v4) + 760);
  *(_DWORD *)(PsGetCurrentProcessWin32Process(v8, v7) + 760) = v6;
  UserSessionSwitchLeaveCrit(v10, v9);
  return 1LL;
}
