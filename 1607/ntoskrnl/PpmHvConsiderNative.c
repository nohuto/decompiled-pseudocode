/*
 * XREFs of PpmHvConsiderNative @ 0x140139B44
 * Callers:
 *     PoInitializePrcb @ 0x1403D4A9C (PoInitializePrcb.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EAE0 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14054EC10 (PpmUpdateIdleStates.c)
 * Callees:
 *     <none>
 */

bool PpmHvConsiderNative()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x408) == 0;
  return v0;
}
