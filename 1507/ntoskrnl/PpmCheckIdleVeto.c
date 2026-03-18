/*
 * XREFs of PpmCheckIdleVeto @ 0x1402340B8
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140234828 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x140234B18 (PpmIdleCheckProcessorStateEligibility.c)
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
