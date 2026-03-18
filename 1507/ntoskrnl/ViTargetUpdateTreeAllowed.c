/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x140746018
 * Callers:
 *     ViTargetAddToCounter @ 0x140745B48 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140745C64 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140745EF8 (ViTargetTrackContiguousMemory.c)
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
