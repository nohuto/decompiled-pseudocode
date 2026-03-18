/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1400722E8
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140070B14 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x1401240A0 (KeMaskInterrupt.c)
 *     PpmEventPerfState @ 0x14012F63C (PpmEventPerfState.c)
 *     IoGetAffinityInterrupt @ 0x14014C734 (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x14045949C (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x140643E40 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1406A7AC0 (EtwpProcessorRundown.c)
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
