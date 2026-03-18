/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x140091D8C
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140091D0C (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x140115CE8 (KeMaskInterrupt.c)
 *     PpmEventPerfState @ 0x14012443C (PpmEventPerfState.c)
 *     IoGetAffinityInterrupt @ 0x14013FC4C (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x1403B041C (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x140445D80 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x14060FA34 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x140666074 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v3; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x280 )
  {
    v3 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v3 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v3 >> 6;
      ProcNumber->Number = v3 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
