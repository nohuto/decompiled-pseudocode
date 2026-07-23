/*
 * XREFs of PfFbBufferListInsertInFree @ 0x1400D7A08
 * Callers:
 *     PfFbBufferListFlushStandby @ 0x1400D7AC8 (PfFbBufferListFlushStandby.c)
 *     PfTFullEventListAdd @ 0x1400D7BB0 (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocateTemporary @ 0x140138B08 (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListAllocate @ 0x140171050 (PfFbBufferListAllocate.c)
 *     PfpRepurposeNameLoggingTrace @ 0x1404F7840 (PfpRepurposeNameLoggingTrace.c)
 *     PfpFlushEventBuffers @ 0x1404F7870 (PfpFlushEventBuffers.c)
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  _SLIST_ENTRY *v7; // r8
  __int64 v8; // rax
  char *v9; // rax
  unsigned __int64 v10; // rtt

  if ( (a4 & 1) != 0 && LOWORD(RunRef[1].Next) + (unsigned int)LOWORD(RunRef[2].Next) >= (int)KeNumberProcessors_0 + 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -a3);
    ExFreePoolWithTag(P, HIDWORD(RunRef[4].Next));
  }
  else
  {
    P[1].Next = RunRef;
    v7 = (_SLIST_ENTRY *)((char *)P + a3);
    P[2].Next = v7;
    v8 = *((unsigned int *)&RunRef[4].Next + 3);
    *((_DWORD *)&P[2].Next + 2) = 0;
    v9 = (char *)P + v8;
    *((_QWORD *)&P[1].Next + 1) = v9;
    *((_DWORD *)&P[2].Next + 3) = a4;
    memset(v9, 0, (char *)v7 - v9);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[1], P);
  }
  if ( a5 )
  {
    _m_prefetchw(RunRef);
    v10 = (unsigned __int64)RunRef->Next & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v10 - 2, v10) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)RunRef);
  }
}
