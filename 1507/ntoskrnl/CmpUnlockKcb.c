/*
 * XREFs of CmpUnlockKcb @ 0x1404C53F0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404255E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeyName @ 0x140427100 (CmpQueryKeyName.c)
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpUnlockAndLockKcbs @ 0x14042A760 (CmpUnlockAndLockKcbs.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x14042C8B0 (CmpCloseKeyObject.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     EnlistKeyBodyWithKCB @ 0x140449DEC (EnlistKeyBodyWithKCB.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpDelayCloseWorker @ 0x1404CA510 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpParseCacheAddHive @ 0x1404EA29C (CmpParseCacheAddHive.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x1404EDAE0 (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404EDBF8 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405414B8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x14055D194 (CmpUpgradeKcbLockToExclusive.c)
 *     CmLockKcbForWrite @ 0x1405B77C8 (CmLockKcbForWrite.c)
 *     CmCallbackGetKeyObjectID @ 0x140652544 (CmCallbackGetKeyObjectID.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmpSearchKeyControlBlockTree @ 0x140656F6C (CmpSearchKeyControlBlockTree.c)
 *     DelistKeyBodyFromKCB @ 0x1406570A0 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140657510 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 *     CmDumpKey @ 0x140660AB4 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmpCreateRegistryRoot @ 0x1407D7838 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpLockTableRemove @ 0x1401E006C (CmpLockTableRemove.c)
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockKcb(char *P)
{
  __int64 v1; // rdx
  signed __int64 v3; // rax

  v1 = 0LL;
  if ( *((struct _KTHREAD **)P + 7) == KeGetCurrentThread() )
    *((_QWORD *)P + 7) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)P + 14);
  _m_prefetchw(P + 48);
  v3 = *((_QWORD *)P + 6);
  if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v1 = v3 - 16;
  if ( (v3 & 2) != 0 || v3 != _InterlockedCompareExchange64((volatile signed __int64 *)P + 6, v1, v3) )
    ExfReleasePushLock((_QWORD *)P + 6, v1);
  KeAbPostRelease((ULONG_PTR)(P + 48));
  if ( (*((_DWORD *)P + 1) & 0x100000) != 0 )
    CmpLockTableRemove((__int64)P, *((_DWORD *)P + 16));
  if ( (*((_DWORD *)P + 1) & 0x80000) != 0 )
    CmpFreeKeyControlBlock(P);
}
