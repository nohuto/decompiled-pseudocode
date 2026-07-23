/*
 * XREFs of PfFbBufferListFlushStandby @ 0x14000695C
 * Callers:
 *     PfGetCompletedTrace @ 0x1403E80E4 (PfGetCompletedTrace.c)
 *     PfpFlushEventBuffers @ 0x1403E92F0 (PfpFlushEventBuffers.c)
 *     PfSnEndTrace @ 0x1403EA594 (PfSnEndTrace.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400068B4 (PfFbBufferListInsertInFree.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedFlushSList @ 0x1401673F0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall PfFbBufferListFlushStandby(_SLIST_ENTRY *RunRef)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY v3; // rsi

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)RunRef) )
  {
    v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)&RunRef[2]);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)RunRef) )
        ((void (__fastcall *)(PSLIST_ENTRY))RunRef[6].Next)(v3);
      else
        PfFbBufferListInsertInFree(RunRef, v3, LODWORD(v3[2].Next) - (_DWORD)v3, *((_DWORD *)&v3[2].Next + 3), 0);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)RunRef);
  }
}
