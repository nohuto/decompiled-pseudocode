/*
 * XREFs of VfRandomGetNumber @ 0x140702B00
 * Callers:
 *     VfPendingShouldForce @ 0x14070D15C (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 *     ViInitSystemPhase0 @ 0x1407B9E64 (ViInitSystemPhase0.c)
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
