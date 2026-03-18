/*
 * XREFs of EtwpStackWalkApc @ 0x1402602F4
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 */

__int64 __fastcall EtwpStackWalkApc(PSLIST_ENTRY ListEntry, _QWORD *a2, unsigned int *a3, int *a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Next_low; // r10
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned int v13; // ebx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  CurrentThread = KeGetCurrentThread();
  Next_low = LODWORD(ListEntry[6].Next);
  if ( (unsigned int)Next_low >= (unsigned int)KeNumberProcessors_0 )
  {
    v10 = 0LL;
  }
  else
  {
    _mm_lfence();
    v10 = KiProcessorBlock[Next_low];
  }
  v11 = *(_QWORD *)(v10 + 24536);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v11 + 1184), ListEntry);
  result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 3);
  v13 = *a3;
  if ( (result & 1) == 0 )
  {
    v14 = *a4;
    v15 = *a5;
    result = EtwpTraceStackWalk(v13, 4096LL, CurrentThread, &v14);
  }
  _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, (HIWORD(v13) & 7) + 24);
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 2544));
  *a2 = 0LL;
  return result;
}
