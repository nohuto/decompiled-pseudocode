/*
 * XREFs of CmpDereferenceHive @ 0x1403DCA48
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpUnfreezeHive @ 0x1401A9ED0 (CmpUnfreezeHive.c)
 *     CmpUnblockTwoHiveWrites @ 0x1403BC320 (CmpUnblockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1403BC51C (CmpUnblockHiveWrites.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpBlockHiveWrites @ 0x1403DC244 (CmpBlockHiveWrites.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1403DC2D0 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1403DC94C (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1403DE0D8 (CmpBlockTwoHiveWrites.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x1405DEC98 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x1405E6A0C (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
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
