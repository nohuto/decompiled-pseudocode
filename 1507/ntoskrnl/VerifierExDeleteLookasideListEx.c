/*
 * XREFs of VerifierExDeleteLookasideListEx @ 0x14074B3D4
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 */

void __fastcall VerifierExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  ViLookasideDelete((int)Lookaside);
  pXdvExDeleteLookasideListEx(Lookaside);
}
