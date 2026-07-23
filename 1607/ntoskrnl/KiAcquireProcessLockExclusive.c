/*
 * XREFs of KiAcquireProcessLockExclusive @ 0x1400F0DA0
 * Callers:
 *     KeSetDisableQuantumProcess @ 0x140076ED4 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14007F140 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x1400ACD8C (KeSetExecuteOptions.c)
 *     KeTerminateThread @ 0x1400F02A4 (KeTerminateThread.c)
 *     KeStartThread @ 0x1400F08BC (KeStartThread.c)
 *     KeSetCpuSetsProcess @ 0x1401D754C (KeSetCpuSetsProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAcquireProcessLockExclusive(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  *a2 = CurrentIrql;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
}
