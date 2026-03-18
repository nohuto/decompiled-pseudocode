/*
 * XREFs of NtUserSetProcessInteractionFlags @ 0x1C021A510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetProcessInteractionFlags(char a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_BYTE *)PsGetCurrentProcessWin32Process(v7, v6);
  CurrentProcessWin32Process[977] = a1;
  CurrentProcessWin32Process[976] = a2;
  CurrentProcessWin32Process[978] = a3;
  UserSessionSwitchLeaveCrit(v10, v9);
  return 1LL;
}
