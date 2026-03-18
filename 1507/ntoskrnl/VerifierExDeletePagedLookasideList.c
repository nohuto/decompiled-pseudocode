/*
 * XREFs of VerifierExDeletePagedLookasideList @ 0x14074B414
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 */

void __fastcall VerifierExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ViLookasideDelete((int)Lookaside);
  pXdvExDeletePagedLookasideList(Lookaside);
}
