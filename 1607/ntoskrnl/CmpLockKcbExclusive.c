/*
 * XREFs of CmpLockKcbExclusive @ 0x140420F10
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpRemoveHiveFromNamespace @ 0x14010BABC (CmpRemoveHiveFromNamespace.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1403FAE14 (CmpLockKcbStackExclusive.c)
 *     CmpDelayCloseWorker @ 0x1404245C0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     EnlistKeyBodyWithKCB @ 0x140491474 (EnlistKeyBodyWithKCB.c)
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140518740 (CmpPerformSingleKcbCacheLookup.c)
 *     CmLockKeyForWrite @ 0x140575108 (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF4A4 (CmpTerminateServerSiloCallback.c)
 *     DelistKeyBodyFromKCB @ 0x1405FF9CC (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x140603F38 (CmpUpgradeKcbLockToExclusive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rbx
  struct _KTHREAD *result; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
    *(_DWORD *)(a1 + 60) = CmpLockTableAdd(a1, 1);
  v2 = (_BYTE *)KeAbPreAcquire(a1 + 40, 0LL, 0);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 40), v2, a1 + 40);
  if ( v3 )
    v3[26] |= 1u;
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
