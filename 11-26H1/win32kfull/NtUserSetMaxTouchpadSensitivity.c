/*
 * XREFs of NtUserSetMaxTouchpadSensitivity @ 0x1402BD1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserSetMaxTouchpadSensitivity(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v5);
  *(_QWORD *)(*(_QWORD *)(v2 + 456) + 808LL) = *(_QWORD *)(*(_QWORD *)(v2 + 456) + 808LL) & 0xFFFFFFFFFFFFFF7FuLL | (a1 != 0 ? 0x80 : 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v5);
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}
