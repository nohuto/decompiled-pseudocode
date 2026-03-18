/*
 * XREFs of PpmHvConsiderNative @ 0x140163368
 * Callers:
 *     PoInitializePrcb @ 0x1403F9D18 (PoInitializePrcb.c)
 *     PpmIdleRegisterDefaultStates @ 0x14059A25C (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14059A450 (PpmUpdateIdleStates.c)
 * Callees:
 *     <none>
 */

bool PpmHvConsiderNative()
{
  char v0; // cl

  v0 = 1;
  if ( (HvlpFlags & 1) != 0 )
    return (HvlpFlags & 4) != 0 && (HvlEnlightenments & 0x408) == 0;
  return v0;
}
