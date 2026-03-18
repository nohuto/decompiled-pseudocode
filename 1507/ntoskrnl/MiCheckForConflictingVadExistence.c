/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x140010018
 * Callers:
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 *     MiIsVaRangeAvailable @ 0x140422388 (MiIsVaRangeAvailable.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140010030 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
