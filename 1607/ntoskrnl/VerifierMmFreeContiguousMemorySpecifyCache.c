/*
 * XREFs of VerifierMmFreeContiguousMemorySpecifyCache @ 0x14071BDB4
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x14071049C (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemorySpecifyCache(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140300AB0 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return pXdvMmFreeContiguousMemorySpecifyCache(a1, a2, a3);
}
