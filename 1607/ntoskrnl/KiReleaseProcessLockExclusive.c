/*
 * XREFs of KiReleaseProcessLockExclusive @ 0x1400F2E8C
 * Callers:
 *     KeSetDisableQuantumProcess @ 0x140076E54 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14007F0C0 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x1400AE824 (KeSetExecuteOptions.c)
 *     KeThawProcess @ 0x1400C7448 (KeThawProcess.c)
 *     KeForceResumeProcess @ 0x1400C8E70 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x1400C8F3C (KeFreezeProcess.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x14014A0B8 (KeSetAffinityProcess.c)
 *     KeFreezeProcessNew @ 0x1401D2130 (KeFreezeProcessNew.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiReleaseProcessLockExclusive(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v2);
}
