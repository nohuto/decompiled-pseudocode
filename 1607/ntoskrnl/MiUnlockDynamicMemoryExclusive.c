/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x140132E74
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14013E234 (MiFreeUnusedPfnPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014AC3C (MiInitializeWorkingSetManagerParameters.c)
 *     MiClearPartitionPageBitMap @ 0x1401F1248 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401F1B74 (MiInsertPartitionPages.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MmGetChannelInformation @ 0x14054C23C (MmGetChannelInformation.c)
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140661134 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
