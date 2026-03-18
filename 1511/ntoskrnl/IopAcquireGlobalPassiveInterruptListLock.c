/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x1401BF458
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1401BF474 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401BF514 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401BF574 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
