/*
 * XREFs of SepGetCurrentLogLevel @ 0x1402502F4
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x140250318 (SepGetLearningModeObjectInformation.c)
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
