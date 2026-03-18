/*
 * XREFs of IoInitSystem @ 0x1407936BC
 * Callers:
 *     Phase1Initialization @ 0x14054EA14 (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x140087534 (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x14014BBA4 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x1405664C8 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028B0 (VfNotifyVerifierOfEvent.c)
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 */

char IoInitSystem()
{
  if ( !(unsigned __int8)IoInitSystemPreDrivers() )
    return 0;
  if ( !(unsigned int)IopInitializeSystemDrivers() )
  {
    HeadlessKernelAddLogEntry();
    return 0;
  }
  if ( !PnpBootOptions )
    PnpSerializeBoot();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(0);
  IopRegistryInitializeCallbacks();
  return 1;
}
