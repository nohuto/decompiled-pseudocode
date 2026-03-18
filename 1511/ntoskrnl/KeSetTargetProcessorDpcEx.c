/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x1400ED984
 * Callers:
 *     KeMaskInterrupt @ 0x140115CE8 (KeMaskInterrupt.c)
 *     KeSetTargetProcessorDpc @ 0x1401C743C (KeSetTargetProcessorDpc.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  Dpc->Number = ProcessorIndexFromNumber + 640;
  return 0;
}
