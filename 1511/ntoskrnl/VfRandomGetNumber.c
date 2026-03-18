/*
 * XREFs of VfRandomGetNumber @ 0x1406B72E0
 * Callers:
 *     VfPendingShouldForce @ 0x1406C10C4 (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 *     ViInitSystemPhase0 @ 0x14076F8BC (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = ViRandomExAuxVarY & 0x7F;
  ViRandomExAuxVarY = ViRandomExConstantVector[v2];
  ViRandomSeed = (2147483629 * ViRandomSeed + 2147483587) % 0x7FFFFFFFu;
  result = (unsigned int)ViRandomSeed;
  ViRandomExConstantVector[v2] = ViRandomSeed;
  if ( a2 >= a1 )
    return a1 + (unsigned int)result % (a2 - a1 + 1);
  return result;
}
