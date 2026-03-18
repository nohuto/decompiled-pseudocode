/*
 * XREFs of NtUserCanCurrentThreadChangeForeground @ 0x1401A0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1401A21F0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 */

__int64 NtUserCanCurrentThreadChangeForeground()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  EnterSharedCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v3);
  v1 = (unsigned __int8)RunForegroundAccessCheck(0LL, 1LL);
  if ( v3[0] )
  {
    v0 = v4;
    --*(_DWORD *)(v4 + 28);
  }
  UserSessionSwitchLeaveCrit(v0);
  return v1;
}
