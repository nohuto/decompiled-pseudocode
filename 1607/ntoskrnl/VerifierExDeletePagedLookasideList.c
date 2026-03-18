/*
 * XREFs of VerifierExDeletePagedLookasideList @ 0x140717230
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeletePagedLookasideList(__int64 a1)
{
  ViLookasideDelete(a1);
  return pXdvExDeletePagedLookasideList(a1);
}
