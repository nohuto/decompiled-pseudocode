/*
 * XREFs of VerifierMmFreeNonCachedMemory @ 0x1406CFD40
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x1406C43B0 (ViTargetFreeContiguousMemory.c)
 */

void __fastcall VerifierMmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_1402DB788 )
    ViTargetFreeContiguousMemory(retaddr, (__int64)BaseAddress);
  pXdvMmFreeNonCachedMemory(BaseAddress, NumberOfBytes);
}
