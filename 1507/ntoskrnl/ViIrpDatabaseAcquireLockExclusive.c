/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x14025B248
 * Callers:
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x140741298 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1407427F8 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140742978 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14074ABA8 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

struct _KTHREAD *__fastcall ViIrpDatabaseAcquireLockExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *result; // rax
  unsigned int v4; // ebx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ViIrpDatabaseLock);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(&ViIrpDatabaseLock, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(&ViIrpDatabaseLock);
    while ( (ViIrpDatabaseLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (ViIrpDatabaseLock & 0x40000000) == 0 )
        _InterlockedCompareExchange(&ViIrpDatabaseLock, ViIrpDatabaseLock | 0x40000000, ViIrpDatabaseLock);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  result = KeGetCurrentThread();
  *a1 = CurrentIrql;
  ViIrpDatabaseExclusiveLockOwner = (__int64)result;
  return result;
}
