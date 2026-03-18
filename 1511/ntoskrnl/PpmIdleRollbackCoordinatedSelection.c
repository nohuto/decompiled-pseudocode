/*
 * XREFs of PpmIdleRollbackCoordinatedSelection @ 0x1401E7CF0
 * Callers:
 *     PpmIdleSelectStates @ 0x140134970 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1401E7294 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1401E755C (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleRollbackCoordinatedSelection(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 result; // rax

  for ( LODWORD(v2) = *(_DWORD *)(a1 + 4);
        (unsigned int)v2 > a2;
        *(_DWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * v2) + PpmPlatformStates + 312) = 0 )
  {
    v2 = (unsigned int)(v2 - 1);
    result = PpmPlatformStates;
  }
  *(_DWORD *)(a1 + 4) = a2;
  return result;
}
