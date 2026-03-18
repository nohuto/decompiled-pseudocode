/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x14015A080
 * Callers:
 *     MiInitializeWorkingSetManagerParameters @ 0x14016EFB8 (MiInitializeWorkingSetManagerParameters.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiClearChildPartitionMdl @ 0x14021CE50 (MiClearChildPartitionMdl.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140583560 (MiInitializeMirroring.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  __int16 v4; // ax

  v3 = a1 + 232;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 232));
  KeAbPostRelease(v3);
  v4 = *(_WORD *)(a2 + 486) + 1;
  *(_WORD *)(a2 + 486) = v4;
  if ( !v4 && *(_QWORD *)(a2 + 152) != a2 + 152 )
    KiCheckForKernelApcDelivery();
}
