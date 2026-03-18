/*
 * XREFs of PpmHvConsiderNative @ 0x140136D88
 * Callers:
 *     PoInitializePrcb @ 0x1403A9E9C (PoInitializePrcb.c)
 *     PpmIdleRegisterDefaultStates @ 0x14052FDF4 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14052FF24 (PpmUpdateIdleStates.c)
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
