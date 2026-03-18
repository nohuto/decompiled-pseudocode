/*
 * XREFs of MiReturnPartitionResidentAvailable @ 0x1401718E8
 * Callers:
 *     MiRemoveVadCharges @ 0x14042FB20 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x14045F008 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140460678 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnPartitionResidentAvailable(__int64 a1, unsigned __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), a2);
}
