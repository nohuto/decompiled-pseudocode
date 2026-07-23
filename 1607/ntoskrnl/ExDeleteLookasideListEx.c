/*
 * XREFs of ExDeleteLookasideListEx @ 0x1400A6D40
 * Callers:
 *     <none>
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x1400A6DAC (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v1; // zf
  KSPIN_LOCK *v3; // rcx

  v1 = (Lookaside->L.Type & 1) == 0;
  v3 = &ExNPagedLookasideLock;
  if ( !v1 )
    v3 = &ExPagedLookasideLock;
  ExpRemoveGeneralLookaside(v3);
  ExFlushLookasideListEx(Lookaside);
}
