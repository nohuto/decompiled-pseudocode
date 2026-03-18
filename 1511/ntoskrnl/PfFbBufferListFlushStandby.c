/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1400FAB90
 * Callers:
 *     PfGetCompletedTrace @ 0x1403E7018 (PfGetCompletedTrace.c)
 *     PfSnEndTrace @ 0x1404D2B18 (PfSnEndTrace.c)
 *     PfpFlushEventBuffers @ 0x1404D3260 (PfpFlushEventBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     PfFbBufferListInsertInFree @ 0x1400FAAE8 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
  }
}
