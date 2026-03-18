/*
 * XREFs of ViIrpDatabaseAcquireLockShared @ 0x14025B304
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x14074A9FC (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ViIrpDatabaseAcquireLockShared(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  int v4; // ett

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ViIrpDatabaseLock);
  }
  else
  {
    _m_prefetchw(&ViIrpDatabaseLock);
    v4 = ViIrpDatabaseLock & 0x7FFFFFFF;
    result = (unsigned int)_InterlockedCompareExchange(
                             &ViIrpDatabaseLock,
                             (ViIrpDatabaseLock & 0x7FFFFFFF) + 1,
                             ViIrpDatabaseLock & 0x7FFFFFFF);
    if ( v4 != (_DWORD)result )
      result = ExpWaitForSpinLockSharedAndAcquire(&ViIrpDatabaseLock);
  }
  *a1 = CurrentIrql;
  return result;
}
