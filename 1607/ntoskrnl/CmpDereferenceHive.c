/*
 * XREFs of CmpDereferenceHive @ 0x1403FCA50
 * Callers:
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpUnfreezeHive @ 0x1401B47F4 (CmpUnfreezeHive.c)
 *     CmpUnblockHiveWrites @ 0x1403E13D8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1403E141C (CmpBlockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x1403E164C (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1403FC040 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1403FC878 (CmpGetNextHive.c)
 *     CmpUnlockHashEntryByKcb @ 0x1403FC980 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140437B40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x14049B348 (CmpUnlockHashEntryByIndex.c)
 *     CmLoadKey @ 0x14049C9B4 (CmLoadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14049F6F4 (CmpLateUnloadHiveWorker.c)
 *     CmpFreeAllMemory @ 0x1405FCA7C (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1405FE0FC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1406044B0 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x140605F64 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x14060D2A0 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpDereferenceHive(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(a1);
  return result;
}
