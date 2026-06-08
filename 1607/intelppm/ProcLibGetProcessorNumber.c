/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0001FC0
 * Callers:
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0004238 (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004498 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary2 @ 0x1C0015104 (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001A288 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001A4B8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001A754 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCap @ 0x1C001A9C8 (ProcLibTraceCap.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001AE14 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001B010 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001B34C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001B558 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C001B64C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceProcessorIds @ 0x1C001BA00 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001BAE8 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001BCFC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C001BE40 (ProcLibTraceSummary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C000F104 == 1 )
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
