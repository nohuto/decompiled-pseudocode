/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1400067EC
 * Callers:
 *     PfGetCompletedTrace @ 0x1403E6AB4 (PfGetCompletedTrace.c)
 *     PfpFlushEventBuffers @ 0x1403E7CC0 (PfpFlushEventBuffers.c)
 *     PfSnEndTrace @ 0x1403E8F64 (PfSnEndTrace.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140006744 (PfFbBufferListInsertInFree.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedFlushSList @ 0x140166E80 (RtlpInterlockedFlushSList.c)
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
