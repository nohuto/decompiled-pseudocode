/*
 * XREFs of NtUserLockSetForegroundWindow @ 0x140194510
 * Callers:
 *     <none>
 * Callees:
 *     ?_LockSetForegroundWindow@@YA_NI@Z @ 0x140194550 (-_LockSetForegroundWindow@@YA_NI@Z.c)
 */

_BOOL8 __fastcall NtUserLockSetForegroundWindow(unsigned int a1)
{
  BOOL v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = _LockSetForegroundWindow(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
