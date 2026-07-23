/*
 * XREFs of PoRequestShutdownEvent @ 0x14056C184
 * Callers:
 *     SepRmCommandServerThread @ 0x14056BA4C (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x14056C1C0 (PopRequestShutdownWait.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = PopRequestShutdownWait(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = &PopShutdownEvent;
    return 0;
  }
  return result;
}
