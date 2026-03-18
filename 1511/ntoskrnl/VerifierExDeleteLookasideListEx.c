/*
 * XREFs of VerifierExDeleteLookasideListEx @ 0x1406C8848
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x1406C8D68 (ViLookasideDelete.c)
 */

void __fastcall VerifierExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  ViLookasideDelete((int)Lookaside);
  pXdvExDeleteLookasideListEx(Lookaside);
}
