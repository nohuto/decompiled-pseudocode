/*
 * XREFs of IopReleaseGlobalPassiveInterruptListLock @ 0x1401BF71C
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1401BF474 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401BF514 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401BF574 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

void __fastcall IopReleaseGlobalPassiveInterruptListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&PassiveInterruptListLock);
  __writecr8(v1);
}
