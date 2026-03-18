/*
 * XREFs of CmpLockRegistryExclusive @ 0x140448470
 * Callers:
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 *     CmpDelayFreeRMWorker @ 0x140559334 (CmpDelayFreeRMWorker.c)
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405A3950 (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     NtCompactKeys @ 0x14064FE10 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14065002C (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1406503A4 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1406505EC (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     CmEtwRunDown @ 0x140652CF0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmFreezeRegistry @ 0x140659CF0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&CmpRegistryLock, 1u);
}
