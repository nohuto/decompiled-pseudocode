/*
 * XREFs of VerifierExDeleteNPagedLookasideList @ 0x140717210
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeleteNPagedLookasideList(__int64 a1)
{
  ViLookasideDelete(a1);
  return pXdvExDeleteNPagedLookasideList(a1);
}
