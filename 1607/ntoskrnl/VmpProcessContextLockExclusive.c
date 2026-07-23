/*
 * XREFs of VmpProcessContextLockExclusive @ 0x140224334
 * Callers:
 *     VmpFlushTb @ 0x140223DB0 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x140223EEC (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x1402240D0 (VmpInsertMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x1402243CC (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(a1);
  return CurrentIrql;
}
