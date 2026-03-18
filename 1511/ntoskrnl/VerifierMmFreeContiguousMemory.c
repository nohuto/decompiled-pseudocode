/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x1406CFCC0
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x1406C43B0 (ViTargetFreeContiguousMemory.c)
 */

void __fastcall VerifierMmFreeContiguousMemory(PVOID BaseAddress)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_1402DB788 )
    ViTargetFreeContiguousMemory(retaddr, (__int64)BaseAddress);
  pXdvMmFreeContiguousMemory(BaseAddress);
}
