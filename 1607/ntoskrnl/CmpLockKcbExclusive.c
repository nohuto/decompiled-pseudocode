/*
 * XREFs of CmpLockKcbExclusive @ 0x140422050
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpRemoveHiveFromNamespace @ 0x1400878C4 (CmpRemoveHiveFromNamespace.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4BDC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FBF0C (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1403FBF54 (CmpLockKcbStackExclusive.c)
 *     CmpDelayCloseWorker @ 0x1404256F0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140437DB0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     EnlistKeyBodyWithKCB @ 0x1404909E4 (EnlistKeyBodyWithKCB.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049AFB8 (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14049B1B4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1404A0334 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404F14AC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x140574BC8 (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF3F0 (CmpTerminateServerSiloCallback.c)
 *     DelistKeyBodyFromKCB @ 0x1405FF918 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140601798 (CmpReplicateKeyToVirtual.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x140603E84 (CmpUpgradeKcbLockToExclusive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpLockTableAdd @ 0x1401B5204 (CmpLockTableAdd.c)
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
