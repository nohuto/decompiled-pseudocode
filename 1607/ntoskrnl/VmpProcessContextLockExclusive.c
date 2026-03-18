/*
 * XREFs of VmpProcessContextLockExclusive @ 0x140224508
 * Callers:
 *     VmpFlushTb @ 0x140223F84 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x1402240C0 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x1402242A4 (VmpInsertMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x1402245A0 (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(a1);
  return CurrentIrql;
}
