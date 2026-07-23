/*
 * XREFs of PfFbBufferListInsertInFree @ 0x1400FAAE8
 * Callers:
 *     PfFbBufferListAllocateTemporary @ 0x1400F1CFC (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListFlushStandby @ 0x1400FAB90 (PfFbBufferListFlushStandby.c)
 *     PfTFullEventListAdd @ 0x1400FAC40 (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocate @ 0x140142DCC (PfFbBufferListAllocate.c)
 *     PfpRepurposeNameLoggingTrace @ 0x1404D3234 (PfpRepurposeNameLoggingTrace.c)
 *     PfpFlushEventBuffers @ 0x1404D3260 (PfpFlushEventBuffers.c)
 *     PfTCleanup @ 0x14063154C (PfTCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  _SLIST_ENTRY *v7; // r8
  __int64 v8; // rax
  char *v9; // rax

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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
}
