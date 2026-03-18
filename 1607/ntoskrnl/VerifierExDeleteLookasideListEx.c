/*
 * XREFs of VerifierExDeleteLookasideListEx @ 0x1407171F0
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeleteLookasideListEx(__int64 a1)
{
  ViLookasideDelete(a1);
  return pXdvExDeleteLookasideListEx(a1);
}
