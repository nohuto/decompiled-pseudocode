/*
 * XREFs of KeUpdateGroupSchedulingConstants @ 0x14016E33C
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x14015D3D4 (PspReadDfssConfigurationValues.c)
 *     KiEnableGroupScheduling @ 0x14016E280 (KiEnableGroupScheduling.c)
 * Callees:
 *     <none>
 */

__int64 KeUpdateGroupSchedulingConstants()
{
  unsigned __int64 v0; // r8

  v0 = 1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[0] + 1524) / 0x3E8;
  KiCycleDivisorShortTerm = v0 * (unsigned int)PsDfssShortTermSharingMS;
  KiCycleDivisorLongTerm = v0 * (unsigned int)PsDfssLongTermSharingMS;
  KiCyclesPerGeneration = v0 * (unsigned int)PsDfssGenerationLengthMS;
  KiGroupSchedulingNumerator = PsDfssLongTermFraction1024;
  KiGenerationTicks = 10000 * (unsigned __int64)(unsigned int)PsDfssGenerationLengthMS / KeMaximumIncrement;
  return KiAssignSchedulingGroupWeights(0, 1, 0LL);
}
