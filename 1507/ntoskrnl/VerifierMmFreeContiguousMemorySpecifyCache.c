/*
 * XREFs of VerifierMmFreeContiguousMemorySpecifyCache @ 0x1407537BC
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x140745C64 (ViTargetFreeContiguousMemory.c)
 */

void __fastcall VerifierMmFreeContiguousMemorySpecifyCache(
        PVOID BaseAddress,
        SIZE_T NumberOfBytes,
        MEMORY_CACHING_TYPE CacheType)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_14032BAE8 )
    ViTargetFreeContiguousMemory(retaddr, (__int64)BaseAddress);
  pXdvMmFreeContiguousMemorySpecifyCache(BaseAddress, NumberOfBytes, CacheType);
}
