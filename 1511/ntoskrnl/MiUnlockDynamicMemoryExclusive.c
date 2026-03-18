/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x140126D68
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1401413A4 (MiInitializeWorkingSetManagerParameters.c)
 *     MiClearChildPartitionMdl @ 0x1401D9088 (MiClearChildPartitionMdl.c)
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     MiInitializeMirroring @ 0x14074CF24 (MiInitializeMirroring.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 216;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 216), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 216));
  KeAbPostRelease(v3);
  return KiLeaveGuardedRegionUnsafe(a2);
}
