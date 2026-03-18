/*
 * XREFs of NtUserIsWindowDisplayChangeSuppressed @ 0x1402B79A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserIsWindowDisplayChangeSuppressed(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  char v5; // r8
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v7);
    LOBYTE(v4) = (v5 & 0x10) != 0;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
