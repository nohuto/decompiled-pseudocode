/*
 * XREFs of CmpLockRegistryExclusive @ 0x1403DE874
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 *     CmpDelayFreeRMWorker @ 0x1404C2A84 (CmpDelayFreeRMWorker.c)
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 *     CmpSaveBootControlSet @ 0x14050EC14 (CmpSaveBootControlSet.c)
 *     CmFreezeRegistry @ 0x1405188CC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 *     CmpMarkCurrentProfileDirty @ 0x14051DBB0 (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     NtCompactKeys @ 0x1405DB720 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405DB93C (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1405DBB9C (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405DBD48 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 *     CmEtwRunDown @ 0x1405DD7C4 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140753C54 (CmGetSystemDriverList.c)
 * Callees:
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&CmpRegistryLock, 1u);
}
