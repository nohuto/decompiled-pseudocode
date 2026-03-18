/*
 * XREFs of CmpDereferenceHive @ 0x140447BD4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpUnfreezeHive @ 0x1401DFB54 (CmpUnfreezeHive.c)
 *     CmpUnblockHiveWrites @ 0x1404075C8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14040760C (CmpBlockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x140407838 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140407890 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1404470F4 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x140447A6C (CmpGetNextHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140447B68 (CmpUnlockHashEntryByIndex.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     CmpFreeAllMemory @ 0x1406541E4 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x14065DE68 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
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
