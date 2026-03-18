/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x1401CDA9C
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1401CD954 (IoProcessPassiveInterrupts.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D044 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x14062D190 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1401CD9E0 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1401CDACC (IopFindPassiveInterruptBlockLocked.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x1401CDCA4 (IopReleaseGlobalPassiveInterruptListLock.c)
 */

__int64 __fastcall IopFindPassiveInterruptBlock(unsigned int a1)
{
  __int64 PassiveInterruptBlockLocked; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  IopAcquireGlobalPassiveInterruptListLock(&v6);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(a1);
  LOBYTE(v3) = v6;
  v4 = PassiveInterruptBlockLocked;
  IopReleaseGlobalPassiveInterruptListLock(v3);
  return v4;
}
