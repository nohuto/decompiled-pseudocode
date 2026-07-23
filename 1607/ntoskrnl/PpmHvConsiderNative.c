/*
 * XREFs of PpmHvConsiderNative @ 0x14013A0B4
 * Callers:
 *     PoInitializePrcb @ 0x1403D4A9C (PoInitializePrcb.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EE80 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14054EFB0 (PpmUpdateIdleStates.c)
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
