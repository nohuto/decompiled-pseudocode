/*
 * XREFs of ExDeleteLookasideListEx @ 0x1400E9330
 * Callers:
 *     VerifierExDeleteLookasideListEx @ 0x1406C8848 (VerifierExDeleteLookasideListEx.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x1400E93A0 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx

  v2 = (Lookaside->L.Type & 1) == 0;
  v3 = &ExNPagedLookasideLock;
  if ( !v2 )
    v3 = &ExPagedLookasideLock;
  ExpRemoveGeneralLookaside(v3);
  ExFlushLookasideListEx(Lookaside);
}
