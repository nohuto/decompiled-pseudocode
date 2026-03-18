/*
 * XREFs of PpmCheckIdleVeto @ 0x1401E6E0C
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1401E755C (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x1401E7744 (PpmIdleCheckProcessorStateEligibility.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCheckIdleVeto(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rdx

  v1 = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_QWORD *)(a1 + 32) && (v2 = *(_QWORD *)(a1 + 8), v2 != a1 + 8) )
      return *(unsigned int *)(v2 + 16);
    else
      return 0x80000000;
  }
  return v1;
}
