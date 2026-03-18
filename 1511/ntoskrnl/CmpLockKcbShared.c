/*
 * XREFs of CmpLockKcbShared @ 0x140423B90
 * Callers:
 *     CmpParseCacheAddHive @ 0x1403BB0AC (CmpParseCacheAddHive.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpQueryKeyName @ 0x140420760 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x14049A970 (CmpCloseKeyObject.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A9258 (CmCallbackGetKeyObjectIDEx.c)
 *     CmCallbackGetKeyObjectID @ 0x1405DD018 (CmCallbackGetKeyObjectID.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405E17EC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     CmDumpKey @ 0x1405E943C (CmDumpKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 */

signed __int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 v2; // rdi
  signed __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
    *(_DWORD *)(a1 + 64) = CmpLockTableAdd(a1, 0);
  v2 = KeAbPreAcquire(a1 + 48, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 48), v2, a1 + 48);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
