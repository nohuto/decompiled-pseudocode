/*
 * XREFs of KiAcquireProcessLockShared @ 0x1401DAD7C
 * Callers:
 *     KeQueryCpuSetsProcess @ 0x1401D7448 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401D7670 (KeSetSelectedCpuSetsThread.c)
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
