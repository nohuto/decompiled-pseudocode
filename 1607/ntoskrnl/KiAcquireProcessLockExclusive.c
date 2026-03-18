/*
 * XREFs of KiAcquireProcessLockExclusive @ 0x1400F2F50
 * Callers:
 *     KeSetDisableQuantumProcess @ 0x140076E54 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14007F0C0 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x1400AE824 (KeSetExecuteOptions.c)
 *     KeTerminateThread @ 0x1400F2454 (KeTerminateThread.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     KeSetCpuSetsProcess @ 0x1401D7720 (KeSetCpuSetsProcess.c)
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
