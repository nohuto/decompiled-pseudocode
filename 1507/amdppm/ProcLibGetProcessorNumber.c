/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0001BB4
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0001980 (ProcLibTraceProcessorSpecificEvent.c)
 *     ComputeProcessorEnergy @ 0x1C0005590 (ComputeProcessorEnergy.c)
 *     ProcLibTraceSummary @ 0x1C0012870 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C0012B54 (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C0012FC8 (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C00130D0 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C00134EC (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00137D8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0013A74 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0013CA4 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0013F18 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C00140E8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C00142E4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00144D8 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0014928 (ProcLibTracePerfConstraintChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C000974C == 1 )
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
