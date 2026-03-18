/*
 * XREFs of VerifierMmFreeNonCachedMemory @ 0x14075380C
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x140745C64 (ViTargetFreeContiguousMemory.c)
 */

void __fastcall VerifierMmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_14032BAE8 )
    ViTargetFreeContiguousMemory(retaddr, (__int64)BaseAddress);
  pXdvMmFreeNonCachedMemory(BaseAddress, NumberOfBytes);
}
