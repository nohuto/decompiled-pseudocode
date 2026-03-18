/*
 * XREFs of CmpLockRegistryExclusive @ 0x1403FD9E8
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmEnumerateKey @ 0x1404390C0 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404E9890 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1404EB204 (CmpDelayFreeRMWorker.c)
 *     CmpCommitLightWeightTransaction @ 0x14053A870 (CmpCommitLightWeightTransaction.c)
 *     NtInitializeRegistry @ 0x140547164 (NtInitializeRegistry.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14055C7CC (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x14055E464 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1405F9400 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405F964C (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1405F9934 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9B0C (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1405F9DF0 (NtRenameKey.c)
 *     CmEtwRunDown @ 0x1405FB640 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 *     CmFreezeRegistry @ 0x140602BC0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140602DE0 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1407AF6CC (CmGetSystemDriverList.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14002D430 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&CmpRegistryLock, 1u);
}
