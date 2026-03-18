/*
 * XREFs of VerifierExDeletePagedLookasideList @ 0x1406C8888
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x1406C8D68 (ViLookasideDelete.c)
 */

void __fastcall VerifierExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ViLookasideDelete((int)Lookaside);
  pXdvExDeletePagedLookasideList(Lookaside);
}
