/*
 * XREFs of IopReleaseGlobalPassiveInterruptListLock @ 0x1401CDAF0
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1401CD848 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401CD8E8 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401CD948 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 */

void __fastcall IopReleaseGlobalPassiveInterruptListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&PassiveInterruptListLock);
  __writecr8(v1);
}
