/*
 * XREFs of HUBHSM_QueueingHubStatusForLostChanges @ 0x1C0007090
 * Callers:
 *     <none>
 * Callees:
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0027754 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHSM_QueueingHubStatusForLostChanges(__int64 a1)
{
  __int64 v1; // rcx
  __int16 v2; // dx
  unsigned __int16 v3; // ax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 702);
  v3 = *(_WORD *)(v1 + 700);
  if ( (v2 & 2) != 0 )
    return 2053LL;
  if ( ((v3 >> 1) & 1) != 0 && (v3 & 2) == 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(v1);
    return 2033LL;
  }
  if ( ((v3 >> 1) & 1) != 0 || (v3 & 2) == 0 )
    return 2053LL;
  else
    return 2037LL;
}
