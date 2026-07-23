/*
 * XREFs of IoInitSystem @ 0x1407936BC
 * Callers:
 *     Phase1Initialization @ 0x14054EDB4 (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x14010B72C (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x14014C114 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x140566A08 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028E0 (VfNotifyVerifierOfEvent.c)
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 */

char __fastcall IoInitSystem(void *a1)
{
  if ( !(unsigned __int8)IoInitSystemPreDrivers(a1) )
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
