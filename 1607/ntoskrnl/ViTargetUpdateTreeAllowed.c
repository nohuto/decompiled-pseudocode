/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x1407107E8
 * Callers:
 *     ViTargetAddToCounter @ 0x140710350 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x14071046C (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140710564 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1407106E0 (ViTargetTrackContiguousMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 ViTargetUpdateTreeAllowed()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
    return ViTargetInitialized != 0;
  return result;
}
