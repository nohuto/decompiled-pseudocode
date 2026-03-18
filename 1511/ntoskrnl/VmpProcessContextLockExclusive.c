/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14020C900
 * Callers:
 *     VmpFlushTb @ 0x14020C4C4 (VmpFlushTb.c)
 *     VmpInsertMemoryRange @ 0x14020C69C (VmpInsertMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14020CA3C (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(a1);
  return CurrentIrql;
}
