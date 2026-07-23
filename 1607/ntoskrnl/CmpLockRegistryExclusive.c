/*
 * XREFs of CmpLockRegistryExclusive @ 0x1403FC8A8
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404CB980 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1404CD388 (CmpDelayFreeRMWorker.c)
 *     CmpCommitLightWeightTransaction @ 0x14053ADB0 (CmpCommitLightWeightTransaction.c)
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14055CD0C (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x1405F9148 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1405F94B4 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405F9700 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1405F99E8 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9BC0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 *     CmEtwRunDown @ 0x1405FB6F4 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     CmFreezeRegistry @ 0x140602C74 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140602E94 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1407AF6CC (CmGetSystemDriverList.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&CmpRegistryLock, 1u);
}
