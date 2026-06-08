/*
 * XREFs of EvtDriverUnload @ 0x1C001AE80
 * Callers:
 *     DriverEntry @ 0x1C0022000 (DriverEntry.c)
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
