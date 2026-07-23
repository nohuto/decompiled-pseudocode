/*
 * XREFs of CmpLockKcbShared @ 0x140434310
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmpCloseKeyObject @ 0x1403E3690 (CmpCloseKeyObject.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmpQueryKeyName @ 0x140403390 (CmpQueryKeyName.c)
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140518418 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405185D4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFE80 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
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
