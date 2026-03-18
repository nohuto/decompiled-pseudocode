/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x14025B370
 * Callers:
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x140741298 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1407427F8 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140742978 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14074ABA8 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall ViIrpDatabaseReleaseLockExclusive(unsigned __int8 a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ViIrpDatabaseExclusiveLockOwner = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ViIrpDatabaseLock, retaddr);
  else
    ViIrpDatabaseLock = 0;
  result = a1;
  __writecr8(a1);
  return result;
}
