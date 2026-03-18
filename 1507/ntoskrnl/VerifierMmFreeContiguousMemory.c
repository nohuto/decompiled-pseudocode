/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x14075378C
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x140745C64 (ViTargetFreeContiguousMemory.c)
 */

void __fastcall VerifierMmFreeContiguousMemory(PVOID BaseAddress)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_14032BAE8 )
    ViTargetFreeContiguousMemory(retaddr, (__int64)BaseAddress);
  pXdvMmFreeContiguousMemory(BaseAddress);
}
