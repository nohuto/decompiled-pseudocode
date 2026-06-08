/*
 * XREFs of EvtDriverUnload @ 0x1C000F4B0
 * Callers:
 *     DriverEntry @ 0x1C001F124 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS EvtDriverUnload()
{
  NTSTATUS result; // eax

  if ( ProcLibEtwRegistered )
  {
    result = EtwUnregister(ProcLibEtwHandle);
    ProcLibEtwRegistered = 0;
  }
  return result;
}
