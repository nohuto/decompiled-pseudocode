/*
 * XREFs of CmpUnlockKcb @ 0x1403FE4F0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpParseCacheAddHive @ 0x1403BB0AC (CmpParseCacheAddHive.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     EnlistKeyBodyWithKCB @ 0x1403E0248 (EnlistKeyBodyWithKCB.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpDelayCloseWorker @ 0x1403F9EB0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpQueryKeyName @ 0x140420760 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049979C (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140499880 (CmpRunDownDelayDerefKCBEngine.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x14049A970 (CmpCloseKeyObject.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A9258 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x1404C66EC (CmpUpgradeKcbLockToExclusive.c)
 *     CmLockKcbForWrite @ 0x140541740 (CmLockKcbForWrite.c)
 *     CmCallbackGetKeyObjectID @ 0x1405DD018 (CmCallbackGetKeyObjectID.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405E0D28 (CmpTerminateServerSiloCallback.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 *     DelistKeyBodyFromKCB @ 0x1405E137C (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405E17EC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 *     CmDumpKey @ 0x1405E943C (CmDumpKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     CmpCreateRegistryRoot @ 0x140745C60 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockKcb(char *P)
{
  signed __int64 v1; // rdx
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
    ExfReleasePushLock((_QWORD *)P + 6);
  KeAbPostRelease((ULONG_PTR)(P + 48));
  if ( (*((_DWORD *)P + 1) & 0x100000) != 0 )
    CmpLockTableRemove((__int64)P, *((_DWORD *)P + 16));
  if ( (*((_DWORD *)P + 1) & 0x80000) != 0 )
    CmpFreeKeyControlBlock((unsigned __int64)P);
}
