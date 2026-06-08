/*
 * XREFs of DecodeMWaitCState @ 0x1C0016660
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00016E0 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0001AAC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001AE8 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0003E18 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0003FAC (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceSummary2 @ 0x1C00129BC (ProcLibTraceSummary2.c)
 *     IsValidAcpiGenericAddress @ 0x1C0013424 (IsValidAcpiGenericAddress.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001503C (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0019348 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0019578 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0019814 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0019B84 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0019ED4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001A0D0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C001A2DC (ProcLibTraceNoPayloadEvent.c)
 *     ProcLibTracePccSummary @ 0x1C001A334 (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001A40C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C001A708 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001A874 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C001AABC (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001ABA4 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001ADB8 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C001AEFC (ProcLibTraceSummary.c)
 */

__int64 __fastcall DecodeMWaitCState(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // r10
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int8 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  __int128 v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-10h]

  v5 = 0LL;
  HIDWORD(v16) = 0;
  if ( *(_BYTE *)a2 == 127 && *(_BYTE *)(a2 + 1) == 1 && *(_BYTE *)(a2 + 2) == 2 )
  {
    if ( (*(_DWORD *)(a1 + 248) & 0x7F000) != 0 )
    {
      v9 = (*(_DWORD *)(a1 + 256) & 0x80000) == 0;
      v10 = *(_QWORD *)(a2 + 4);
      v11 = *(_BYTE *)(a2 + 3);
      *(_QWORD *)&v15 = v10;
      LODWORD(v16) = v11;
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(a1 + 184);
      if ( !v9 )
        DWORD1(v15) = HIDWORD(v10) | 1;
      if ( a3 )
      {
        v14 = (unsigned int)v10 | 0x30000000000000LL;
        if ( (v11 & 2) != 0 )
          v14 = (unsigned int)v10 | 0x130000000000000LL;
        *a3 = v14;
      }
      v12 = a5;
      if ( a5 )
      {
        *(_BYTE *)(a5 + 64) = 1;
        if ( (v11 & 2) != 0 && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C000E3E4) )
          *(_QWORD *)(v12 + 16) = MWaitIdleCheck;
        else
          *(_QWORD *)(v12 + 16) = v5;
        *(_OWORD *)(v12 + 32) = v15;
        *(_QWORD *)(v12 + 24) = MWaitIdle;
        *(_QWORD *)(v12 + 48) = v16;
      }
      if ( a4 )
        *a4 = v5;
    }
    else
    {
      LODWORD(v5) = -1073741637;
    }
  }
  else
  {
    LODWORD(v5) = -1073741823;
  }
  return (unsigned int)v5;
}
