/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0001524
 * Callers:
 *     ProcLibTraceEnergyEstimation @ 0x1C0003800 (ProcLibTraceEnergyEstimation.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003A68 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary2 @ 0x1C00129BC (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0018FC4 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00191F4 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0019490 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCap @ 0x1C0019704 (ProcLibTraceCap.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0019B50 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0019D4C (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001A088 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001A290 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C001A384 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceProcessorIds @ 0x1C001A738 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001A820 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001AA34 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C001AB78 (ProcLibTraceSummary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C000DD7C == 1 )
  {
    if ( *(_DWORD *)(a1 + 60) == -1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v2 = 0;
      a2->Reserved = 0;
      a2->Group = 0;
      a2->Number = *(_BYTE *)(a1 + 60);
    }
  }
  else
  {
    return (unsigned int)KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), a2);
  }
  return v2;
}
