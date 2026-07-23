/*
 * XREFs of IoInitSystem @ 0x1407D0850
 * Callers:
 *     Phase1Initialization @ 0x14059A0DC (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x1401539BC (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x14016FE6C (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x1405B1584 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x140737430 (VfNotifyVerifierOfEvent.c)
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 */

char __fastcall IoInitSystem(char *a1)
{
  if ( !IoInitSystemPreDrivers(a1) )
    return 0;
  if ( !(unsigned int)IopInitializeSystemDrivers() )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 8;
    return 0;
  }
  if ( !PnpBootOptions )
    PnpSerializeBoot();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(0);
  IopRegistryInitializeCallbacks();
  return 1;
}
