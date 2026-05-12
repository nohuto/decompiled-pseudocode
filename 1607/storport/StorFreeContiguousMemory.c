/*
 * XREFs of StorFreeContiguousMemory @ 0x1C005F02C
 * Callers:
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00184CC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidDeleteAdapter @ 0x1C0029A30 (RaidDeleteAdapter.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C002FBD4 (StorpUpdateUncachedExtensionAllocationRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorFreeContiguousMemory(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  MmFreeContiguousMemory(*(PVOID *)a2);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
