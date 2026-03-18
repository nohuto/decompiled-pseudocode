/*
 * XREFs of NtUserGetProcessWindowStation @ 0x1C00FBB20
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00699F0 (_GetProcessWindowStation.c)
 */

__int64 NtUserGetProcessWindowStation()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  GetProcessWindowStation(&v3);
  UserSessionSwitchLeaveCrit(v1, v0);
  return v3;
}
