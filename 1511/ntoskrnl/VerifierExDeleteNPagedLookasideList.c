/*
 * XREFs of VerifierExDeleteNPagedLookasideList @ 0x1406C8868
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x1406C8D68 (ViLookasideDelete.c)
 */

void __fastcall VerifierExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ViLookasideDelete((int)Lookaside);
  pXdvExDeleteNPagedLookasideList(Lookaside);
}
