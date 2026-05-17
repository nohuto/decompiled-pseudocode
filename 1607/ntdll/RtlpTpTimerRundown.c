/*
 * XREFs of RtlpTpTimerRundown @ 0x180064E50
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800640D0 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerFinalizationCallback @ 0x180064400 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x180064690 (RtlDeleteTimer.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x18003A148 (RtlpTpDeleteData.c)
 *     RtlpTpTimerQueueRundown @ 0x180065028 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpTpTimerRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData((void **)(a1 + 16));
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
