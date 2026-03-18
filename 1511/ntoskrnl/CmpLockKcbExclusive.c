/*
 * XREFs of CmpLockKcbExclusive @ 0x1403F9950
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     CmpLockTwoKcbsExclusive @ 0x1403DB140 (CmpLockTwoKcbsExclusive.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     EnlistKeyBodyWithKCB @ 0x1403E0248 (EnlistKeyBodyWithKCB.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpDelayCloseWorker @ 0x1403F9EB0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049979C (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140499880 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x1404C66EC (CmpUpgradeKcbLockToExclusive.c)
 *     CmLockKcbForWrite @ 0x140541740 (CmLockKcbForWrite.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405E0D28 (CmpTerminateServerSiloCallback.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 *     DelistKeyBodyFromKCB @ 0x1405E137C (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _KTHREAD *result; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
    *(_DWORD *)(a1 + 64) = CmpLockTableAdd(a1, 1);
  v2 = KeAbPreAcquire(a1 + 48, 0LL, 0LL);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v2, a1 + 48);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
