/*
 * XREFs of IopReleaseGlobalPassiveInterruptListLock @ 0x1401CDCA4
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1401CD9FC (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401CDA9C (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401CDAFC (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 */

void __fastcall IopReleaseGlobalPassiveInterruptListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&PassiveInterruptListLock);
  __writecr8(v1);
}
