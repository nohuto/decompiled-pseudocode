/*
 * XREFs of VerifierExDeleteNPagedLookasideList @ 0x14074B3F4
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 */

void __fastcall VerifierExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ViLookasideDelete((int)Lookaside);
  pXdvExDeleteNPagedLookasideList(Lookaside);
}
