/*
 * XREFs of VerifierMmFreeContiguousMemorySpecifyCache @ 0x1406CFCF0
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x1406C43B0 (ViTargetFreeContiguousMemory.c)
 */

void __fastcall VerifierMmFreeContiguousMemorySpecifyCache(
        PVOID BaseAddress,
        SIZE_T NumberOfBytes,
        MEMORY_CACHING_TYPE CacheType)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_1402DB788 )
    ViTargetFreeContiguousMemory(retaddr, (__int64)BaseAddress);
  pXdvMmFreeContiguousMemorySpecifyCache(BaseAddress, NumberOfBytes, CacheType);
}
