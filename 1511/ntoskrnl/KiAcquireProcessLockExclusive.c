/*
 * XREFs of KiAcquireProcessLockExclusive @ 0x14002AB2C
 * Callers:
 *     KeSetDisableQuantumProcess @ 0x140021B70 (KeSetDisableQuantumProcess.c)
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KeSetQuantumProcess @ 0x1400960D4 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x1400967CC (KeSetExecuteOptions.c)
 *     KeSetCpuSetsProcess @ 0x1401C8660 (KeSetCpuSetsProcess.c)
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
