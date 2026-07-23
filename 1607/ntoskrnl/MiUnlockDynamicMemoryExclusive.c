/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x1401333E4
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14013E7A4 (MiFreeUnusedPfnPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014B1AC (MiInitializeWorkingSetManagerParameters.c)
 *     MiClearPartitionPageBitMap @ 0x1401F1074 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MmGetChannelInformation @ 0x14054C77C (MmGetChannelInformation.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140661218 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 224));
  KeAbPostRelease(v3);
  return KiLeaveGuardedRegionUnsafe(a2);
}
