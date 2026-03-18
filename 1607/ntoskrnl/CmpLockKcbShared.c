/*
 * XREFs of CmpLockKcbShared @ 0x140435440
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FBF0C (CmpLockKcbStackTopExclusiveRestShared.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmpQueryKeyName @ 0x1404044D0 (CmpQueryKeyName.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpLockTwoKcbsShared @ 0x140438C20 (CmpLockTwoKcbsShared.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCloseKeyObject @ 0x14049A770 (CmpCloseKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404A000C (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1404A01C8 (CmpFindSubkeyInHashByChildCell.c)
 *     NtFlushKey @ 0x1404E88CC (NtFlushKey.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404F14AC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFDCC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmDumpKey @ 0x14060C0B8 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401B5204 (CmpLockTableAdd.c)
 */

signed __int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 v2; // rdi
  signed __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
    *(_DWORD *)(a1 + 60) = CmpLockTableAdd(a1, 0);
  v2 = KeAbPreAcquire(a1 + 40, 0LL, 0);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 40), v2, a1 + 40);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  return result;
}
