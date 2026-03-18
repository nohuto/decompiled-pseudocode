/*
 * XREFs of MiReturnPartitionResidentAvailable @ 0x140166F8C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 *     MiFindLargePageMemory @ 0x14062B53C (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnPartitionResidentAvailable(__int64 a1, unsigned __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), a2);
}
