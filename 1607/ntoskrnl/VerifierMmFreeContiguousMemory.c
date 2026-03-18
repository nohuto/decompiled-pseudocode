/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x14071BD84
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x14071046C (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemory(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140300AD0 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return pXdvMmFreeContiguousMemory(a1);
}
