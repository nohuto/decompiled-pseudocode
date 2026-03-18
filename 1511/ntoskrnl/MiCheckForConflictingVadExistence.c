/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x140037FF8
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1403F6328 (MiIsVaRangeAvailable.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140038010 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
