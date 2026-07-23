/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x140071E68
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140070694 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 *     PpmEventPerfState @ 0x14012FBAC (PpmEventPerfState.c)
 *     IoGetAffinityInterrupt @ 0x14014CCA4 (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x14045836C (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x140643F24 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v2; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x280 )
  {
    v2 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v2 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v2 >> 6;
      ProcNumber->Number = v2 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
