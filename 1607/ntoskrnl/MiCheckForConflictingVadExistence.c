/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x140014318
 * Callers:
 *     MiIsVaRangeAvailable @ 0x14042A590 (MiIsVaRangeAvailable.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528600 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140014330 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
