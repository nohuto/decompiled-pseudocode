/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x14025B3B4
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x14074A9FC (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall ViIrpDatabaseReleaseLockShared(unsigned __int8 a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ViIrpDatabaseLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ViIrpDatabaseLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ViIrpDatabaseLock);
  }
  result = a1;
  __writecr8(a1);
  return result;
}
