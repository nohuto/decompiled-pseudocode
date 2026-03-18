/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x1401CD9E0
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1401CD9FC (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401CDA9C (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401CDAFC (IopInsertPassiveInterruptBlock.c)
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
