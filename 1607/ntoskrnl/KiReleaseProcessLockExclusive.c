/*
 * XREFs of KiReleaseProcessLockExclusive @ 0x1400F0CDC
 * Callers:
 *     KeSetDisableQuantumProcess @ 0x140076ED4 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14007F140 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x1400ACD8C (KeSetExecuteOptions.c)
 *     KeThawProcess @ 0x1400C52E8 (KeThawProcess.c)
 *     KeForceResumeProcess @ 0x1400C6D10 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x1400C6DDC (KeFreezeProcess.c)
 *     KeStartThread @ 0x1400F08BC (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x14014A628 (KeSetAffinityProcess.c)
 *     KeFreezeProcessNew @ 0x1401D1F5C (KeFreezeProcessNew.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiReleaseProcessLockExclusive(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v2);
}
