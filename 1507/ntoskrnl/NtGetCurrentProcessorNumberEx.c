/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x1406BFA2C
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

ULONG __cdecl NtGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  struct _KPRCB *CurrentPrcb; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(ProcessorNumber, 4uLL, 1u);
  CurrentPrcb = KeGetCurrentPrcb();
  ProcessorNumber->Group = CurrentPrcb->Group;
  ProcessorNumber->Number = CurrentPrcb->GroupIndex;
  ProcessorNumber->Reserved = 0;
  return 0;
}
