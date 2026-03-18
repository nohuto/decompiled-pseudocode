/*
 * XREFs of SepGetCurrentLogLevel @ 0x14021AE60
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14000FB70 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x14021AE84 (SepGetLearningModeObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 SepGetCurrentLogLevel()
{
  if ( KeGetCurrentIrql() )
    return 2LL;
  else
    return KeGetCurrentThread()->ApcState.InProgressFlags & 1;
}
