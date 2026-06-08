/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C00018D4
 * Callers:
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0003EB8 (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000410C (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary2 @ 0x1C00129BC (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0019348 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0019578 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0019814 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCap @ 0x1C0019A88 (ProcLibTraceCap.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0019ED4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001A0D0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001A40C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001A614 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C001A708 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceProcessorIds @ 0x1C001AABC (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001ABA4 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001ADB8 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C001AEFC (ProcLibTraceSummary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C000E0BC == 1 )
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
