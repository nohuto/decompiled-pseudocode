/*
 * XREFs of IoInitSystem @ 0x140763E54
 * Callers:
 *     Phase1Initialization @ 0x14052FD40 (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x140003214 (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x140141EF4 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x140534808 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1406B70C8 (VfNotifyVerifierOfEvent.c)
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 */

char __fastcall IoInitSystem(UNICODE_STRING *a1)
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
