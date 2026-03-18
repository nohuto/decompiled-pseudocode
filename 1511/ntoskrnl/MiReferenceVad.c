/*
 * XREFs of MiReferenceVad @ 0x140063C70
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiCfgInitializeProcess @ 0x14046372C (MiCfgInitializeProcess.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x14062CB58 (MiDeleteAllPartialCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
