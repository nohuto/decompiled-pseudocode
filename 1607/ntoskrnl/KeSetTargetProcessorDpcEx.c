/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x1400B0C04
 * Callers:
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 *     KeSetTargetProcessorDpc @ 0x1401D6214 (KeSetTargetProcessorDpc.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14000D810 (KeGetProcessorIndexFromNumber.c)
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
