/*
 * XREFs of KiAcquireProcessLockShared @ 0x140028764
 * Callers:
 *     KeQueryBasePriorityThread @ 0x1400285C8 (KeQueryBasePriorityThread.c)
 *     KeQueryAffinityProcess @ 0x140028660 (KeQueryAffinityProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1401C855C (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401C8784 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAcquireProcessLockShared(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  *a2 = CurrentIrql;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
}
