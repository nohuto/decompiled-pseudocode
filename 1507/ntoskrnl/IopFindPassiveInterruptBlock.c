/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x1401FAE24
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1401FAC30 (IoProcessPassiveInterrupts.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14067DB34 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x14067DC64 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1401FAEB4 (IopFindPassiveInterruptBlockLocked.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopFindPassiveInterruptBlock(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 PassiveInterruptBlockLocked; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PassiveInterruptListLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PassiveInterruptListLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PassiveInterruptListLock);
  }
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PassiveInterruptListLock, retaddr);
  else
    _InterlockedAnd64(&PassiveInterruptListLock, 0LL);
  __writecr8(CurrentIrql);
  return PassiveInterruptBlockLocked;
}
