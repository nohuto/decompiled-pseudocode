/*
 * XREFs of CmpUnlockKcb @ 0x140438610
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpRemoveHiveFromNamespace @ 0x1400878C4 (CmpRemoveHiveFromNamespace.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4BDC (CmpSearchKeyControlBlockTreeEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmpQueryKeyName @ 0x1404044D0 (CmpQueryKeyName.c)
 *     CmpDelayCloseWorker @ 0x1404256F0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140437DB0 (CmpDereferenceKeyControlBlock.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpUnlockTwoKcbs @ 0x140438FD0 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     EnlistKeyBodyWithKCB @ 0x1404909E4 (EnlistKeyBodyWithKCB.c)
 *     CmpCloseKeyObject @ 0x14049A770 (CmpCloseKeyObject.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049AFB8 (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14049B1B4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404A000C (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1404A01C8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1404A0334 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 *     NtFlushKey @ 0x1404E88CC (NtFlushKey.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404F14AC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x140574BC8 (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF3F0 (CmpTerminateServerSiloCallback.c)
 *     DelistKeyBodyFromKCB @ 0x1405FF918 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFDCC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140601798 (CmpReplicateKeyToVirtual.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x140603E84 (CmpUpgradeKcbLockToExclusive.c)
 *     CmDumpKey @ 0x14060C0B8 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     CmpLockTableRemove @ 0x1401B5334 (CmpLockTableRemove.c)
 *     CmpFreeKeyControlBlock @ 0x1404375A0 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockKcb(char *P)
{
  signed __int64 v1; // rdx
  bool v3; // si
  signed __int64 v4; // rax

  v1 = 0LL;
  v3 = (*((_DWORD *)P + 1) & 0x80000) != 0;
  if ( *((struct _KTHREAD **)P + 6) == KeGetCurrentThread() )
    *((_QWORD *)P + 6) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)P + 12);
  _m_prefetchw(P + 40);
  v4 = *((_QWORD *)P + 5);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v1 = v4 - 16;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, v1, v4) )
    ExfReleasePushLock((_QWORD *)P + 5);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  if ( (*((_DWORD *)P + 1) & 0x100000) != 0 )
    CmpLockTableRemove((__int64)P, *((_DWORD *)P + 15));
  if ( v3 && (*((_DWORD *)P + 1) & 0x80000) != 0 )
    CmpFreeKeyControlBlock((unsigned __int64)P);
}
