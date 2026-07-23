/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x1401CD8E8
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1401CD7A0 (IoProcessPassiveInterrupts.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D0F8 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x14062D244 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1401CD82C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1401CD918 (IopFindPassiveInterruptBlockLocked.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x1401CDAF0 (IopReleaseGlobalPassiveInterruptListLock.c)
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
