/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1400D7AC8
 * Callers:
 *     PfSnEndTrace @ 0x1404F6D18 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x1404F74C8 (PfGetCompletedTrace.c)
 *     PfpFlushEventBuffers @ 0x1404F7870 (PfpFlushEventBuffers.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PfFbBufferListInsertInFree @ 0x1400D7A08 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall PfFbBufferListFlushStandby(_SLIST_ENTRY *RunRef)
{
  unsigned __int64 v2; // rtt
  PSLIST_ENTRY v3; // rdi
  unsigned __int64 v4; // rtt
  PSLIST_ENTRY v5; // rsi
  unsigned __int64 v6; // rtt

  _m_prefetchw(RunRef);
  v2 = (unsigned __int64)RunRef->Next & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v2 + 2, v2)
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)RunRef) )
  {
    v3 = RtlpInterlockedFlushSList((PSLIST_HEADER)&RunRef[2]);
    while ( v3 )
    {
      v5 = v3;
      v3 = v3->Next;
      _m_prefetchw(RunRef);
      v6 = (unsigned __int64)RunRef->Next & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v6 + 2, v6)
        || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)RunRef) )
      {
        ((void (__fastcall *)(PSLIST_ENTRY))RunRef[6].Next)(v5);
      }
      else
      {
        PfFbBufferListInsertInFree(RunRef, v5, LODWORD(v5[2].Next) - (_DWORD)v5, *((_DWORD *)&v5[2].Next + 3), 0);
      }
    }
    _m_prefetchw(RunRef);
    v4 = (unsigned __int64)RunRef->Next & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v4 - 2, v4) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)RunRef);
  }
}
