/*
 * XREFs of HUBHSM_QueueingHubStatusForLostChanges @ 0x1C0007710
 * Callers:
 *     <none>
 * Callees:
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00285A0 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHSM_QueueingHubStatusForLostChanges(__int64 a1)
{
  __int64 v1; // rcx
  __int16 v2; // dx
  unsigned __int16 v3; // ax
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 726);
  v3 = *(_WORD *)(v1 + 724);
  if ( (v2 & 2) != 0 )
    return 2053LL;
  v4 = v3;
  LOWORD(v4) = (v3 >> 1) & 1;
  if ( (_WORD)v4 && (v3 & 2) == 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(v1, v4);
    return 2033LL;
  }
  if ( (_WORD)v4 || (v3 & 2) == 0 )
    return 2053LL;
  else
    return 2037LL;
}
