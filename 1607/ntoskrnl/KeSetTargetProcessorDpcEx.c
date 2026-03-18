/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x1400B2CB8
 * Callers:
 *     KeMaskInterrupt @ 0x1401240A0 (KeMaskInterrupt.c)
 *     KeSetTargetProcessorDpc @ 0x1401D63E8 (KeSetTargetProcessorDpc.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14000DC90 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 640;
  return 0;
}
