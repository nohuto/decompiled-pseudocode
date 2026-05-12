/*
 * XREFs of RaidDmaAllocateUncachedExtension @ 0x1C0008DDC
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C0008CA0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     StorAllocateContiguousMemory @ 0x1C004D1D8 (StorAllocateContiguousMemory.c)
 */

__int64 __fastcall RaidDmaAllocateUncachedExtension(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v8; // r10d

  v8 = a4;
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
  {
    v8 = -1;
    if ( *(_DWORD *)(a1 + 24) == 3 )
      v8 = -1;
  }
  return StorAllocateContiguousMemory(a2, a3, v8, a5, a6, a7, a8);
}
